package dev.gustapinto.ms.repositories;

import org.springframework.data.jpa.repository.JpaRepository;

import dev.gustapinto.ms.domain.entities.Product;

public interface ProductRepository extends JpaRepository<Product, Integer> {
}
