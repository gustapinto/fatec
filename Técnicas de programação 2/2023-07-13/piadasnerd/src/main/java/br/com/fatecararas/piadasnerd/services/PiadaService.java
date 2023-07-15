package br.com.fatecararas.piadasnerd.services;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import br.com.fatecararas.piadasnerd.models.Piada;
import br.com.fatecararas.piadasnerd.repositories.PiadaRepository;

@Service
public class PiadaService {
    @Autowired
    private PiadaRepository repository;

    public Piada criar(Piada piada) {
        return this.repository.save(piada);
    }

    public List<Piada> buscarTodas() {
        return this.repository.findAll();
    }
}
