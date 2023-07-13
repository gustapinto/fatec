package daorepository.model.dao;

import java.sql.Connection;
import java.sql.DriverManager;
import java.util.logging.Level;
import java.util.logging.Logger;

public class ConexaoFactory {
    public static final Logger logger = Logger.getLogger(ConexaoFactory.class.getName());
    public static final String url = "jdbc:mysql://root:passw@127.0.0.1:3306/banco";
    public static final String user = "root";
    public static final String password = "passw";

    public static Connection getConexao() throws Exception {
        try {
            return DriverManager.getConnection(url);
        } catch (Exception e) {
            logger.log(Level.SEVERE, "erro", e);

            throw e;
        }
    }
}
