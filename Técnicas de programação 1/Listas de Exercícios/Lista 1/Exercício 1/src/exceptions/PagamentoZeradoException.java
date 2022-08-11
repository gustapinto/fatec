package exceptions;

public class PagamentoZeradoException extends Exception {
    public PagamentoZeradoException(String cargo) {
        super("O pagamento do " + cargo + " não pode ser zerado!");
    }
}
