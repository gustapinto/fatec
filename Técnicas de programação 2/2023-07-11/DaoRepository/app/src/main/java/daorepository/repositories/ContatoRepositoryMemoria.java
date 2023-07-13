package daorepository.repositories;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

import daorepository.model.ContatoVO;
import daorepository.repositories.interfaces.IContatoRepository;

public class ContatoRepositoryMemoria implements IContatoRepository {
    List<ContatoVO> colecao;

    public ContatoRepositoryMemoria() {
        this.colecao = new ArrayList<>();
    }

    public ContatoRepositoryMemoria(List<ContatoVO> colecao) {
        this.colecao = colecao;
    }

    @Override
    public void salvar(ContatoVO contatoVO) throws Exception {
        this.colecao.add(contatoVO);
    }

    @Override
    public void atualizar(ContatoVO contatoVO) throws Exception {
        this.colecao = this.colecao.stream()
                .map(contato -> {
                    if (contato.id() == contatoVO.id()) {
                        return contatoVO;
                    }

                    return contato;
                })
                .collect(Collectors.toList());
    }

    @Override
    public void excluir(Integer id) throws Exception {
        this.colecao = this.colecao.stream()
                .filter(contato -> contato.id() != id)
                .collect(Collectors.toList());
    }

    @Override
    public List<ContatoVO> buscarTodos() throws Exception {
        return this.colecao;
    }

    @Override
    public ContatoVO buscarPorEmail(String email) throws Exception {
        return this.colecao.stream()
                .filter(contato -> contato.email().equals(email))
                .findFirst()
                .orElse(null);
    }
}
