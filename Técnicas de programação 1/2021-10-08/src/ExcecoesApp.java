public class ExcecoesApp {
    public static void main(String[] args) {
        String texto = null;
        String maiusculo = null;

        // Tenta executar um código (try) e trata a exceção caso ela ocorra (catch)
        try {
            maiusculo = texto.toUpperCase();

            System.out.println("Texto maiúsculo: " + maiusculo);
        } catch (NullPointerException excecao) {
            // Executa quando um NullPointerException for lançado
            System.out.println("Ocorreu uma exceção de null pointer: " + excecao.getLocalizedMessage());
        } catch (Exception excecao) {
            // Executa quando uma exceção qualquer for lançada
            System.out.println("Ocorreu uma exceção: " + excecao.getLocalizedMessage());
        } finally {  // Sempre é executado
            System.out.println("...");
        }
    }

    // Throws especifica quais exceções um método pode lançar
    public void foobar() throws NullPointerException {
        // Lança manualmente uma exceção
        throw new NullPointerException();
    }
}
