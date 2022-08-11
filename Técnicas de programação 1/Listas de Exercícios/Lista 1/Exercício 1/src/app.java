import classes.Funcionario;
import classes.Gerente;
import exceptions.PagamentoZeradoException;

public class app {
    public static void main(String[] args) {
        Gerente gerente = new Gerente("Foo");
        Gerente gerente2 = new Gerente("Oof");

        Funcionario funcionario = new Funcionario("Bar");
        Funcionario funcionario2 = new Funcionario("");

        int pagamentoFuncionario = 1200;

        try {
            gerente.pagamento(pagamentoFuncionario);
            gerente2.pagamento(0);  // Estoura erro
            funcionario.pagamento(pagamentoFuncionario);
            funcionario2.pagamento(pagamentoFuncionario); // Verifica nome genérico
        } catch (PagamentoZeradoException e) {
            System.out.println(e.getLocalizedMessage());
        }
    }
}
