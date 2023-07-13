package daorepository.services.interfaces;

import java.util.List;

import daorepository.model.ContatoVO;

public interface IContatoService {
    void salvar(ContatoVO contatoVO) throws Exception;

    void atualizar(ContatoVO contatoVO) throws Exception;

    void excluir(Integer contatoId) throws Exception;

    ContatoVO buscarPorEmail(String email) throws Exception;

    List<ContatoVO> buscarTodos() throws Exception;
}
