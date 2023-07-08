package devpizza.records;

public abstract class Pizza {
    private final String nome;
    private final float valor;
    private final String[] ingredientes;

    public Pizza(String nome, float valor, String[] ingredientes) {
        this.nome = nome;
        this.valor = valor;
        this.ingredientes = ingredientes;
    }

    public String getNome() {
        return nome;
    }

    public float getValor() {
        return valor;
    }

    public String[] getIngredientes() {
        return ingredientes;
    }

    public void exibe() {
        System.out.println();
        System.out.println(this.nome);
        System.out.println(String.format("Valor: R$ %.2f", this.valor));
        System.out.printf("Ingredientes: %s\n", String.join(", ", this.ingredientes));
    }
}
