package daorepository.repositories;

import java.util.List;

import daorepository.model.ContatoVO;
import daorepository.model.dao.interfaces.IContatoDAO;
import daorepository.repositories.interfaces.IContatoRepository;

public class ContatoRepositoryMySQL implements IContatoRepository {
    private final IContatoDAO contatoDAO;

    public ContatoRepositoryMySQL(IContatoDAO contatoDAO) {
        this.contatoDAO = contatoDAO;
    }

    @Override
    public void salvar(ContatoVO contatoVO) throws Exception {
        this.contatoDAO.salvar(contatoVO);
    }

    @Override
    public void atualizar(ContatoVO contatoVO) throws Exception {
        this.contatoDAO.atualizar(contatoVO);
    }

    @Override
    public void excluir(Integer id) throws Exception {
        this.contatoDAO.excluir(id);
    }

    @Override
    public List<ContatoVO> buscarTodos() throws Exception {
        return this.contatoDAO.buscarTodos();
    }

    @Override
    public ContatoVO buscarPorEmail(String email) throws Exception {
        return this.contatoDAO.buscarPorEmail(email);
    }
}
