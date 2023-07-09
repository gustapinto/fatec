package liskovviolacao.domain;

public class ClasseBase {
    public static final int MAX_OPERAND = 1000;

    public int somaComValidacoes(int a, int b) throws IllegalArgumentException {
        // Pré condição: a e b não podem ser maiores que MAX_OPERAND
        if (a > MAX_OPERAND || b > MAX_OPERAND) {
            throw new IllegalArgumentException();
        }

        int resultado = a + b;

        // Pós condição: resultado não pode ser menor do que a ou b
        if (resultado < a || resultado < b) {
            throw new IllegalArgumentException();
        }

        return resultado;
    }
}
