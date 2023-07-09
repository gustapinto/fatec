package liskovviolacao.domain;

public class ClasseValida extends ClasseBase {
    @Override
    // Assinatura compatível com o método somaComValidacoes da classe base
    public int somaComValidacoes(int a, int b) throws IllegalArgumentException {
        // Pré condição bate com a classe base, sem fortalecer a pré condição
        if (a > MAX_OPERAND || b > MAX_OPERAND) {
            throw new IllegalArgumentException();
        }

        int resultado = a + b;

        // Pós condição bate com a classe base, sem ser enfraquecida
        if (resultado < a || resultado < b) {
            throw new IllegalArgumentException();
        }

        // Adiciona mais uma pós condição
        if (resultado == 0) {
            throw new IllegalArgumentException();
        }

        return resultado;
    }
}
