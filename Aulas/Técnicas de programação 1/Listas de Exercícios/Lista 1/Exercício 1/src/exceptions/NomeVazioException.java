package exceptions;

public class NomeVazioException extends Exception {
    public NomeVazioException(String cargo) {
        super("O nome do " + cargo + " não pode ser vazio");
    }
}
