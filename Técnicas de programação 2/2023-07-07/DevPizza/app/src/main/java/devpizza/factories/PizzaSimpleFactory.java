package devpizza.factories;

import devpizza.enums.TipoPizzaEnum;
import devpizza.records.Pizza;
import devpizza.records.pizzas.PizzaCalabresa;
import devpizza.records.pizzas.PizzaCangaceira;
import devpizza.records.pizzas.PizzaDaCasa;
import devpizza.records.pizzas.PizzaPortuguesa;
import devpizza.records.pizzas.PizzaQuatroQueijos;

public class PizzaSimpleFactory {
    public static Pizza montaPizza(TipoPizzaEnum tipoPizza) {
        return switch (tipoPizza) {
            case CALABRESA -> new PizzaCalabresa("Pizza Calabresa", 35f, new String[] {
                "Molho do chef",
                "Mussarela",
                "Azeitona",
                "Calabresa",
                "Orégano,"
            });
            case CANGACEIRA -> new PizzaCangaceira("Pizza Cangaceira", 42.9f, new String[] {
                    "Molho caseiro",
                    "Mussarela",
                    "Carne seca",
                    "Cebola",
                    "Tomate",
                    "Azeitona",
                    "Orégano",
            });
            case DA_CASA -> new PizzaDaCasa("Pizza da Casa", 58f, new String[] {
                    "Molho de tomate",
                    "Mussarela",
                    "Brócolis",
                    "Bacon",
                    "Alho frito",
                    "Lombo",
                    "Catupiry",
            });
            case PORTUGUESA -> new PizzaPortuguesa("Pizza Portuguesa", 46f, new String[] {
                    "Molho de tomate",
                    "Mussarela",
                    "Cebola",
                    "Presunto",
                    "Ovo",
                    "Azeitona",
                    "Tomate",
            });
            case QUATRO_QUEIJOS -> new PizzaQuatroQueijos("Pizza de Quatro Queijos", 42.56f, new String[] {
                    "Molho de tomate",
                    "Mussarela",
                    "Provolone",
                    "Gorgonzola",
                    "Parmesão",
            });
            default -> throw new IllegalArgumentException("Tipo inválido de pizza: " + tipoPizza);
        };
    }
}
