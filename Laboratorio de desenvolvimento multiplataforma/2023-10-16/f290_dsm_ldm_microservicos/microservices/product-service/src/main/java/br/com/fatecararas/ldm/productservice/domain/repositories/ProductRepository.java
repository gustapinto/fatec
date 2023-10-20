package br.com.fatecararas.ldm.productservice.domain.repositories;

import br.com.fatecararas.ldm.productservice.domain.entities.Product;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import java.util.List;
import java.util.Optional;

@Repository
public interface ProductRepository extends JpaRepository<Product, Integer> {
    List<Product> findByDescriptionContains(String description);

    Optional<Product> findByBarcode(String barcode);
}
