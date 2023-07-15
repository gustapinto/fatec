package br.com.fatecararas.piadasnerd.repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import br.com.fatecararas.piadasnerd.models.Piada;

@Repository
public interface PiadaRepository extends JpaRepository<Piada, Integer> {
}
