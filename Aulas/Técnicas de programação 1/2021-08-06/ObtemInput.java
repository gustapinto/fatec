// Importa as bibliotecas padrão usadas
import java.util.Scanner;

class ObtemInput {
    // Java oferece diferentes formas de se obter texto do console
    public static void main(String[] args) {
        /*
         * Obtem a input do usuário usando Scanner
         */
        Scanner scanner = new Scanner(System.in);

        // nextLine() obtem a input como uma String
        String textoScanner = scanner.nextLine();

        System.out.println("Input scanner: " + textoScanner);

        /*
         * Obtem a input do usuário usando Console
         */
        String textoConsole = System.console().readLine();

        System.out.println("Input console: " + textoConsole);
    }
}
