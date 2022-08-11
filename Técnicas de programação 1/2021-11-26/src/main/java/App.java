public class App {
    public static void disparaExcecao() throws FooExcecao {
        // Disparando uma exceção personalizada
        throw new FooExcecao();
    }
             
    
    public static void main(String[] args) {
        try {
            // Bloco de código que intencionalmente disparará exceção
            App.disparaExcecao();
        } catch(FooExcecao excecao) {
            // Lidando com a exceção
            System.out.println(excecao.getLocalizedMessage());
        }
    }
}
