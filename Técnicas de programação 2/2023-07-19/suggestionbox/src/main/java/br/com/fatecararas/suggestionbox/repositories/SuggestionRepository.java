package br.com.fatecararas.suggestionbox.repositories;

import org.springframework.data.jpa.repository.JpaRepository;
import org.springframework.stereotype.Repository;

import br.com.fatecararas.suggestionbox.models.entities.Suggestion;

@Repository
public interface SuggestionRepository extends JpaRepository<Suggestion, Integer> {

}
