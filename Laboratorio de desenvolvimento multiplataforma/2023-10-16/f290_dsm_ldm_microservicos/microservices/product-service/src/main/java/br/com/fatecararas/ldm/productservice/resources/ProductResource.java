package br.com.fatecararas.ldm.productservice.resources;

import java.net.URI;
import java.util.List;
import java.util.Optional;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.data.domain.Page;
import org.springframework.data.domain.PageRequest;
import org.springframework.data.domain.Sort;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.PutMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;
import org.springframework.web.bind.annotation.ResponseStatus;
import org.springframework.web.bind.annotation.RestController;
import org.springframework.web.client.RestTemplate;
import org.springframework.web.servlet.support.ServletUriComponentsBuilder;

import br.com.fatecararas.ldm.productservice.domain.Cambio;
import br.com.fatecararas.ldm.productservice.domain.entities.Product;
import br.com.fatecararas.ldm.productservice.domain.repositories.ProductRepository;
import jakarta.validation.Valid;

@RestController
@RequestMapping("/product")
public class ProductResource {

    private final ProductRepository repository;

    @Autowired
    private RestTemplate restTemplate;

    public ProductResource(ProductRepository repository) {
        this.repository = repository;
    }

    @GetMapping("/paginated/all")
    public ResponseEntity<Page<Product>> getAll(@RequestParam(defaultValue = "0") int page,
            @RequestParam(defaultValue = "100") int size) {

        PageRequest pageable = PageRequest.of(page, size, Sort.Direction.ASC, "description");

        Page<Product> products = repository.findAll(pageable);

        if (products.isEmpty())
            return ResponseEntity
                    .status(HttpStatus.NOT_FOUND)
                    .build();

        return ResponseEntity.ok().body(products);
    }

    @PostMapping
    @ResponseStatus(code = HttpStatus.CREATED)
    public ResponseEntity<Void> create(@RequestBody Product product) {

        Product p = repository.save(product);

        URI uri = ServletUriComponentsBuilder
                .fromCurrentRequest()
                .path("/{id}")
                .buildAndExpand(p.getId())
                .toUri();

        return ResponseEntity.created(uri).build();
    }

    @GetMapping("/find/{term}")
    public List<Product> findByDescription(@PathVariable String term) {
        return repository.findByDescriptionContains(term);
    }

    @GetMapping("/{id}")
    public ResponseEntity<?> findById(@PathVariable Integer id) {
        Optional<Product> optional = repository.findById(id);
        if (optional.isEmpty())
            return ResponseEntity.notFound().build();
        return ResponseEntity.ok().body(optional.get());
    }

    @DeleteMapping("/remove/{id}")
    public void deleteById(@PathVariable Integer id) {
        repository.deleteById(id);
    }

    @PutMapping
    public ResponseEntity<?> update(@Valid @RequestBody Product product) {
        Optional<Product> optional = repository.findById(product.getId());

        if (optional.isEmpty())
            return ResponseEntity.notFound().build();

        Product updatedProduct = optional.get();
        updatedProduct.setBarcode(product.getBarcode());
        updatedProduct.setDescription(product.getDescription());
        updatedProduct.setPrice(product.getPrice());

        return ResponseEntity.ok().body(updatedProduct);
    }

    @GetMapping("/export/{barcode}")
    public Cambio findByBarcode(@PathVariable("barcode") String barcode) {
        Optional<Product> optional = repository.findByBarcode(barcode);

        Product product = optional.get();

        String url = String.format("http://localhost:8001/cambio-service/%s/BRL/USD",
                product.getPrice());

        Cambio cambio = restTemplate.getForObject(url, Cambio.class);
        product.setPrice(cambio.getValue());

        return cambio;
    }
    // TODO: Criar um end-point para recuperar um produto por codigo de barras
    // TODO: Criar um end-point para excluir um produto pelo codigo de barras

    // TODO: Criar uma collection no Postman ou similar para testar as requisições
}
