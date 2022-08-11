package interfaces;

public interface Pessoa {
    void setNome(String nome) throws Exception;

    double pagamento(int valor) throws Exception;
}
