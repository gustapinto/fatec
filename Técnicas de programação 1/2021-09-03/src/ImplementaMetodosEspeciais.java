public class ImplementaMetodosEspeciais {
    public static void main(String[] args) {
        MetodosEspeciais foobar = new MetodosEspeciais("foo", "bar");

        foobar.exibirAtributos();

        System.out.println("Get Foo: " + foobar.getFoo());
        System.out.println("Get Bar: " + foobar.getBar());

        foobar.setFoo("bar");
        foobar.setBar("foo");

        foobar.exibirAtributos();
    }
}
