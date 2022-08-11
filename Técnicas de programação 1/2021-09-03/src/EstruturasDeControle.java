import java.util.Scanner;

public class EstruturasDeControle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Nota: ");

        int nota = scanner.nextInt();

        // Estrutura condicional encadeada
        // Java usa os operadores logicos classicos: &&, ||, !
        if (nota >= 6) {
            System.out.println("Aprovado");
        } else if (nota == 5) {
            System.out.println("Recuperação");
        } else {
            System.out.println("Reprovado");
        }

        // Estrtura Switch Case
        switch (nota) {
            case 0:
                System.out.println("Como tu conseguiu essa façanha?");
                break;

            default:
                System.out.println("Tua nota foi maior que zero");
                break;
        }

        // Laços de repeticao
        int valor = 0;

        while (valor < 5) {
            System.out.println(valor);

            valor++;
        }

        for (int i = 0; i <= 5; i++) {
            System.out.println(i);
        }
    }
}
