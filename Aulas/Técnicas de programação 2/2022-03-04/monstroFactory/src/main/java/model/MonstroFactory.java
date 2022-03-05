package src.main.java.model;

public class MonstroFactory {
    public static Monstro fabricaMonstro(String tipo) {
        if ("porco".equals(tipo)) {
            return new MonstroPorco();
        } else if ("lobo".equals(tipo)) {
            return new MonstroLobo();
        } else if ("pato".equals(tipo)) {
            return new MonstroPato();
        } else if ("gato".equals(tipo)) {
            return new MonstroGato();
        } else {
            return null;
        }
    }
}
