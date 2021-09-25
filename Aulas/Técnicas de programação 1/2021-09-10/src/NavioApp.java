import classes.Navio;

public class NavioApp {
    public static void main(String[] args) {
        Navio navio = new Navio(4, "Branco", "Doca");

        navio.exibeQtdeMotores();  // Acessa metodo da superclasse
        navio.exibeCor();
        navio.exibeFabricante();
    }
}
