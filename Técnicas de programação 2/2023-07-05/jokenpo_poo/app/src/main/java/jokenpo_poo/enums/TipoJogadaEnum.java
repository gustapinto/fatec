package jokenpo_poo.enums;

public enum TipoJogadaEnum {
    PEDRA,
    PAPEL,
    TESOURA,
    LAGARTO,
    SPOCK;

    public static void exibeJogadasValidas() {
        System.out.println("Faça sua jogada: ");

        int i = 1;
        for (var jogadasValidasEnum : values()) {
            System.out.println(i + " - " + jogadasValidasEnum.toString());

            i++;
        }
    }
}
