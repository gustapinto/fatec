package br.com.fatecararas.piadasnerd.services;

import java.util.List;
import java.util.Optional;

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

    public Piada buscarPorId(Integer id) {
        Optional<Piada> optional = this.repository.findById(id);

        if (optional.isEmpty()) {
            throw new RuntimeException(String.format("Id: %s não localizado.", id));
        }

        return optional.get();
    }

    public void excluir(Integer id) {
        this.repository.deleteById(id);
    }

    public void atualizar(Piada piada) {
        if (piada.getId() == null) {
            throw new RuntimeException("Id é obrigatório para atualizar piada.");
        }

        Optional<Piada> optional = this.repository.findById(piada.getId());

        if (optional.isEmpty()) {
            throw new RuntimeException(String.format("Id: %s não localizado.", piada.getId()));
        }

        Piada novaPiada = optional.get();
        novaPiada.setDescricao(piada.getDescricao());
        novaPiada.setResposta(piada.getResposta());
        novaPiada.setPossuiResposta(piada.getPossuiResposta());

        this.repository.save(novaPiada);
    }
}
