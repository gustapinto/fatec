package liskovviolacao.domain;

public class ClasseInvalida extends ClasseBase {
    // Assinatura não compatível com o método somaComValidacoes da classe base
    public int somaComValidacoes(float a, float b) throws IllegalArgumentException {
        // Pré condição não bate com a classe base
        if (a > 35 || b > 67) {
            throw new IllegalArgumentException();
        }

        // Fortalecimento das pré condiçõs
        if (a == 0) {
            throw new IllegalArgumentException();
        }

        float resultado = a + b;

        // Pós condição não existente, enfraquecendo-a em relação a classe base

        return Math.round(resultado);
    }
}
