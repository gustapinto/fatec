package devpizza.enums;

import devpizza.factories.PizzaSimpleFactory;
import devpizza.records.Pizza;

public enum TipoPizzaEnum {
    CALABRESA(1),
    CANGACEIRA(2),
    DA_CASA(3),
    PORTUGUESA(4),
    QUATRO_QUEIJOS(5);

    private int id;

    TipoPizzaEnum(int id) {
        this.id = id;
    }

    public int getId() {
        return id;
    }

    public static void exibe() {
        System.out.println("Escolha uma pizza: ");

        for (TipoPizzaEnum tipoPizza : TipoPizzaEnum.values()) {
            Pizza pizza = PizzaSimpleFactory.montaPizza(tipoPizza);

            System.out.printf("%s - %s \n", tipoPizza.getId(), pizza.getNome());
        }
    }

    public static TipoPizzaEnum obtem(int id) {
        for (TipoPizzaEnum tipoPizzaEnum : TipoPizzaEnum.values()) {
            if (tipoPizzaEnum.getId() == id) {
                return tipoPizzaEnum;
            }
        }

        throw new IllegalArgumentException("Não existem tipos de pizzas com o id: " + id);
    }
}
