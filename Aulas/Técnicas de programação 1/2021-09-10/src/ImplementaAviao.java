import classes.Aviao;

public class ImplementaAviao {
    public static void main(String[] args) {
        Aviao aviao = new Aviao("747X", "Branco", "Jato", 4, "Boeing");

        aviao.setCor("Azul");
        aviao.setModelo("747");

        aviao.exibeAtributos();
        aviao.exibeFabricante();

        // Usa um metodo estatico
        Aviao.exibeMensagem("nao sei de laranja nenhum.");
    }
}
