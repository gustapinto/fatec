package devpizza;

import java.util.Scanner;

import devpizza.enums.TipoPizzaEnum;
import devpizza.factories.PizzaSimpleFactory;
import devpizza.records.Pizza;

public class App {
    public static void main(String[] args) {
        try (var scanner = new Scanner(System.in)) {
            TipoPizzaEnum.exibe();

            int opcao = scanner.nextInt();
            TipoPizzaEnum tipoPizzaEscolhida = TipoPizzaEnum.obtem(opcao);
            Pizza pizza = PizzaSimpleFactory.montaPizza(tipoPizzaEscolhida);

            pizza.exibe();
        }
    }
}
