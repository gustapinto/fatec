package daorepository.repositories.interfaces;

import java.util.List;

import daorepository.model.ContatoVO;

public interface IContatoRepository {
    void salvar(ContatoVO contatoVO) throws Exception;

    void atualizar(ContatoVO contatoVO) throws Exception;

    void excluir(Integer id) throws Exception;

    List<ContatoVO> buscarTodos() throws Exception;

    ContatoVO buscarPorEmail(String email) throws Exception;

}
