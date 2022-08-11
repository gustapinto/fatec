public class ImplementaCarro {
    public static void main(String[] args) {
        Carro carroPreto = new Carro(2, 4, "Preto");
        Carro carroAzul = new Carro(4, 4, "Azul");

        carroPreto.exibePortas();
        carroAzul.exibePortas();
    }
}
