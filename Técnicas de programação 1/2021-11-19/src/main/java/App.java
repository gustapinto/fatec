public class App {
    public static void main(String[] args) {
        Funcoes funcao = new Funcoes();
        
        System.out.println(funcao.somar());
        System.out.println(funcao.somar(10, 1));
        
        funcao.subtrair();
    }
}
