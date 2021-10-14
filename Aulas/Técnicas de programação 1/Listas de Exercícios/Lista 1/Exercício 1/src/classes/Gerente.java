package classes;

import exceptions.NomeVazioException;
import exceptions.PagamentoZeradoException;
import interfaces.Pessoa;

public class Gerente implements Pessoa {
    public String nome;

    public Gerente(String nome) {
        try {
            this.setNome(nome);
        } catch (NomeVazioException e) {
            this.nome = "Gerente";
        }
    }

    @Override
    public void setNome(String nome) throws NomeVazioException {
        if (nome.isEmpty()) {
            throw new NomeVazioException("gerente");
        }

        this.nome = nome;
    }

    @Override
    public double pagamento(int pagamentoFuncionario) throws PagamentoZeradoException {
        if (pagamentoFuncionario == 0) {
            throw new PagamentoZeradoException("gerente");
        }

        double pagamentoGerente = pagamentoFuncionario + (pagamentoFuncionario * 0.2);

        System.out.println("Pagando R$" + pagamentoGerente + " ao gerente " + this.nome);

        return pagamentoGerente;
    }
}
