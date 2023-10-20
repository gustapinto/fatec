package br.com.fatecararas.ldm.cambioservice.domain.repositories;

import br.com.fatecararas.ldm.cambioservice.domain.entities.USD;
import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

@Repository
public interface DollarRepository extends JpaRepository<USD, Long> {

    @Query("SELECT u FROM USD u WHERE u.date = (SELECT MAX(u.date) FROM USD u)")
    USD findLatest();
}

