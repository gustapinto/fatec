package daorepository.model.dao;

import java.sql.Connection;
import java.sql.ResultSet;
import java.sql.Statement;
import java.util.ArrayList;
import java.util.List;
import java.util.logging.Level;
import java.util.logging.Logger;

import daorepository.model.ContatoVO;
import daorepository.model.dao.interfaces.IContatoDAO;
import daorepository.model.dao.interfaces.IMigrationDAO;

public class ContatoDAO implements IContatoDAO, IMigrationDAO {
    private final Logger logger;
    private final Connection connection;

    public ContatoDAO(Connection connection) {
        this.connection = connection;
        this.logger = Logger.getLogger(ContatoDAO.class.getName());
    }

    public ContatoDAO(Connection connection, Logger logger) {
        this.connection = connection;
        this.logger = logger;
    }

    @Override
    public void salvar(ContatoVO contatoVO) throws Exception {
        String queryTemplate = """
                INSERT INTO contatos (nome, email, telefone)
                VALUES ('%s', '%s', '%s')
                """;
        String query = String.format(queryTemplate,
                contatoVO.nome(),
                contatoVO.email(),
                contatoVO.telefone());

        try (Statement statement = this.connection.createStatement()) {
            statement.execute(query);
        } catch (Exception e) {
            logger.log(Level.SEVERE, "erro ao salvar contato", e);

            throw e;
        }
    }

    @Override
    public void atualizar(ContatoVO contatoVO) throws Exception {
        String queryTemplate = """
                UPDATE contatos
                SET nome = '%s',
                    email = '%s',
                    telefone = '%s'
                WHERE id = '%s'""";
        String query = String.format(queryTemplate,
                contatoVO.nome(),
                contatoVO.email(),
                contatoVO.telefone(),
                contatoVO.id());

        try (Statement statement = this.connection.createStatement()) {
            statement.execute(query);
        } catch (Exception e) {
            logger.log(Level.SEVERE, "erro ao atualizar contato", e);

            throw e;
        }
    }

    @Override
    public void excluir(Integer id) throws Exception {
        String queryTemplate = """
                DEELTE FROM contatos
                WHERE id = '%d'""";
        String query = String.format(queryTemplate, id);

        try (Statement statement = this.connection.createStatement()) {
            statement.execute(query);
        } catch (Exception e) {
            logger.log(Level.SEVERE, "erro ao excluir contato", e);

            throw e;
        }
    }

    @Override
    public List<ContatoVO> buscarTodos() throws Exception {
        List<ContatoVO> contatos = new ArrayList<>();

        String query = """
                SELECT id, nome, email, telefone
                FROM contatos
                ORDER BY nome
                """;

        try (Statement statement = this.connection.createStatement()) {
            ResultSet resultSet = statement.executeQuery(query);

            while (resultSet.next()) {
                ContatoVO contatoVO = new ContatoVO(resultSet.getInt("id"),
                        resultSet.getString("nome"),
                        resultSet.getString("email"),
                        resultSet.getString("telefone"));

                contatos.add(contatoVO);
            }
        } catch (Exception e) {
            logger.log(Level.SEVERE, "erro ao obter contatos", e);

            throw e;
        }

        return contatos;
    }

    @Override
    public ContatoVO buscarPorEmail(String email) throws Exception {
        ContatoVO contato = null;

        String queryTemplate = """
                SELECT id, nome, email, telefone
                FROM contatos
                WHERE email = '%s'
                """;
        String query = String.format(queryTemplate, email);

        try (Statement statement = this.connection.createStatement()) {
            ResultSet resultSet = statement.executeQuery(query);

            while (resultSet.next()) {
                contato = new ContatoVO(resultSet.getInt("id"),
                        resultSet.getString("nome"),
                        resultSet.getString("email"),
                        resultSet.getString("telefone"));
            }
        } catch (Exception e) {
            logger.log(Level.SEVERE, "erro ao obter contatos por email", e);

            throw e;
        }

        return contato;
    }

    @Override
    public void migrate() throws Exception {
        String query = """
                CREATE TABLE IF NOT EXISTS contatos (
                    id INTEGER PRIMARY KEY AUTO_INCREMENT,
                    nome VARCHAR(255) NOT NULL,
                    email VARCHAR(255) NOT NULL,
                    telefone VARCHAR(255) NOT NULL
                )
                """;

        try (Statement statement = this.connection.createStatement()) {
            statement.execute(query);
        }
    }
}
