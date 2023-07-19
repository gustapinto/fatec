package br.com.fatecararas.piadasnerd.repositories;

import java.util.List;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.data.jpa.repository.Query;
import org.springframework.stereotype.Repository;

import br.com.fatecararas.piadasnerd.models.Piada;

@Repository
public interface PiadaRepository extends JpaRepository<Piada, Integer> {
    @Query(nativeQuery = true, value = "SELECT p.* FROM piadas p WHERE LOWER(p.descricao) LIKE LOWER(CONCAT('%', :descricao, '%'))")
    List<Piada> buscaPorDescricao(String descricao);
}
