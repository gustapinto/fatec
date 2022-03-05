package src.main.java;

import src.main.java.model.Pizza;
import src.main.java.model.PizzaQueijo;
import src.main.java.model.PizzaVegetal;
import src.main.java.model.PizzaTomate;

public class FabricaPizza {
    public static Pizza fazPizza(String sabor) {
        if (sabor.equals("queijo")) {
            return new PizzaQueijo();
        } else if (sabor.equals("vegetal")) {
            return new PizzaVegetal();
        } else if (sabor.equals("tomate")) {
            return new PizzaTomate();
        } else {
            return null;
        }
    }
}
