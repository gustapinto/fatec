package jokenpo_poo.records;

public record Resultado(Jogador vencedor, String regra) {
    public void exibeResultado() {
        System.out.println();

        if (this.vencedor != null) {
            System.out.println("Vencedor: " + vencedor.nome());
        }

        System.out.println("Critério: " + regra);
    }
}
