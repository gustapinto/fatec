import java.util.Scanner;

public class MetodosEspeciais {
    private String foo;
    private String bar;

    // Metodo construtor da classe, ele inicializa os atributos do objeto e
    // define os parametros de instanciacao do objeto
    public MetodosEspeciais(String foo, String bar) {
        this.foo = foo;
        this.bar = bar;
    }

    // Getters sao usados para retornar valores dos atributos privados
    public String getFoo() {
        return this.foo;
    }

    public String getBar() {
        return this.bar;
    }

    // Setters são usado para atribuir valores a atributos privados
    public void setFoo(String foo) {
        this.foo = foo;
    }

    public void setBar(String bar) {
        this.bar = bar;
    }

    public void exibirAtributos() {
        System.out.println("Foo: " + this.foo);
        System.out.println("Bar: " + this.bar);
    }
}
