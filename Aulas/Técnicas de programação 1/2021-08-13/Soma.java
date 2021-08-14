import java.util.Scanner;

class Soma {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Insira o primeiro valor: ");
        float numero1 = scanner.nextFloat();

        System.out.print("Insira o segundo valor: ");
        float numero2 = scanner.nextFloat();

        float soma = numero1 + numero2;

        System.out.println("Resultado: " + soma);
    }
}
