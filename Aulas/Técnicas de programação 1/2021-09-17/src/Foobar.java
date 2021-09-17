public class Foobar {
    private int foo;

    public Foobar(int foo) {  // Construtor
        this.foo = foo;  // Atribui um valor a foo (linha 2)
    }

    public int getFoo() {  // Getter
        return this.foo;
    }

    public void setFoo(int foo) {  // Setter
        this.foo = foo;
    }
    
    public void multiplosParametros(String msg, String prioridade, int qtde) {
        // Faz algo com os parâmetros
    }
}
