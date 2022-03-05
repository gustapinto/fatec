package src.main.java;

import java.util.Scanner;
import src.main.java.model.Pizza;

public class PizzaStore {
    public static void main(String []args) {
        System.out.println("Escolha um sabor de pizza: ");
        System.out.println("- queijo");
        System.out.println("- vegetal");
        System.out.println("- tomate");

        Scanner input = new Scanner(System.in);
        String sabor = input.next();
        Pizza pizza = FabricaPizza.fazPizza(sabor);

        if (pizza == null) {
            System.out.println("Erro! Digite um sabor válido");
            PizzaStore.main(args);
        } else {
            pizza.preparar();
            pizza.montar();
            pizza.cortar();
            pizza.empacotar();
        }
    }
}
