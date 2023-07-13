package daorepository.services;

import java.util.List;
import java.util.Objects;

import daorepository.model.ContatoVO;
import daorepository.repositories.interfaces.IContatoRepository;
import daorepository.services.interfaces.IContatoService;

public class ContatoService implements IContatoService {
    private final IContatoRepository repository;

    public ContatoService(IContatoRepository repository) {
        this.repository = repository;
    }

    @Override
    public void salvar(ContatoVO contatoVO) throws Exception {
        this.repository.salvar(contatoVO);
    }

    @Override
    public void atualizar(ContatoVO contatoVO) throws Exception {
        if (Objects.isNull(contatoVO) || Objects.isNull(contatoVO.email())) {
            throw new IllegalArgumentException("Email é obrigatório!");
        }

        ContatoVO contatoBanco = this.repository.buscarPorEmail(contatoVO.email());

        if (contatoBanco == null) {
            throw new IllegalArgumentException("Contato não encontrado " + contatoVO.email());
        }

        this.repository.atualizar(contatoVO);
    }

    @Override
    public void excluir(Integer contatoId) throws Exception {
        this.repository.excluir(contatoId);
    }

    @Override
    public ContatoVO buscarPorEmail(String email) throws Exception {
        return this.repository.buscarPorEmail(email);
    }

    @Override
    public List<ContatoVO> buscarTodos() throws Exception {
        return this.repository.buscarTodos();
    }
}
