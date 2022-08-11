public class Sobrecarga {
    // Sobrecarga de métodos em Java, um dos métodos sobrecarregados será
    // chamado quando a assinatura (tipo + nome + argumentos) corresponder
    public void descreve() {
        System.out.println("Nada a descrever");
    }

    public void descreve(String mensagem) {
        System.out.println(mensagem);
    }
}
