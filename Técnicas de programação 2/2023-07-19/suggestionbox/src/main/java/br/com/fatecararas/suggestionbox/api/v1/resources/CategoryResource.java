package br.com.fatecararas.suggestionbox.api.v1.resources;

import java.util.List;
import java.util.Optional;

import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestBody;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RestController;

import br.com.fatecararas.suggestionbox.models.entities.Category;
import br.com.fatecararas.suggestionbox.repositories.CategoryRepository;

@RestController
@RequestMapping("/category")
public class CategoryResource {
    private CategoryRepository repository;

    // Usa injeção de dependência ao invés de @Autowired
    public CategoryResource(CategoryRepository repository) {
        this.repository = repository;
    }

    @PostMapping
    public ResponseEntity<Category> save(@RequestBody Category category) {
        category.setId(null);

        Category newCategory = this.repository.save(category);

        return new ResponseEntity<Category>(newCategory, HttpStatus.CREATED);
    }

    @GetMapping("/{id}")
    public ResponseEntity<?> findByid(@PathVariable("id") Integer id) {
        Optional<Category> optional = this.repository.findById(id);

        if (optional.isEmpty()) {
            return ResponseEntity.notFound().build();
        }

        return new ResponseEntity<Category>(optional.get(), HttpStatus.OK);
    }

    @GetMapping
    public List<Category> all() {
        return this.repository.findAll();
    }
}
