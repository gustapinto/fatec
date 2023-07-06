package br.com.fatecararas.domain;

import java.util.Arrays;

public enum TipoAlgoritmo {
    PAPEL(1),
    TESOURA(2),
    PEDRA(3),
    LAGARTO(4),
    SPOCK(5);

    private Integer id;

    public Integer getId() {
        return id;
    }

    TipoAlgoritmo(Integer id) {
        this.id = id;
    }

    public static TipoAlgoritmo getTipo(Integer id) {
        return Arrays.stream(TipoAlgoritmo.values())
                .filter(t -> t.id.equals(id))
                .findFirst()
                .orElseThrow(() -> new IllegalArgumentException("Id inválido. ID: " + id));
    }
}
