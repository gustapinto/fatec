public class ImplementaAviao {
    public static void main(String[] args) {
        Aviao aviao = new Aviao("747X", "Branco", "Jato", 112543);

        aviao.setCor("Azul");
        aviao.setModelo("747");

        aviao.exibeAtributos();

        // Usa um metodo estatico
        Aviao.exibeMensagem("nao sei de laranja nenhum.");
    }
}
