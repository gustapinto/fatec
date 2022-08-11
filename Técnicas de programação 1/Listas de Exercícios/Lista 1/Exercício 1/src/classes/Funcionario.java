package classes;

import exceptions.NomeVazioException;
import exceptions.PagamentoZeradoException;
import interfaces.Pessoa;

public class Funcionario implements Pessoa {
    public String nome;

    public Funcionario(String nome) {
        try {
            this.setNome(nome);
        } catch (NomeVazioException e) {
            this.nome = "Funcionario";
        }
    }

    @Override
    public void setNome(String nome) throws NomeVazioException {
        if (nome.isEmpty()) {
            throw new NomeVazioException("funcionario");
        }

        this.nome = nome;
    }

    @Override
    public double pagamento(int valor) throws PagamentoZeradoException {
        if (valor == 0) {
            throw new PagamentoZeradoException("funcionário");
        }

        System.out.println("Pagando R$" + valor + " ao funcionário " + this.nome);

        return valor;
    }
}
