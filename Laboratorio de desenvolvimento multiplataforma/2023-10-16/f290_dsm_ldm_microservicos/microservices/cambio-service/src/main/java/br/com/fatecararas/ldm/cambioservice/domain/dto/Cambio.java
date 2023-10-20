package br.com.fatecararas.ldm.cambioservice.domain.dto;

import lombok.AllArgsConstructor;
import lombok.Data;
import lombok.NoArgsConstructor;

@AllArgsConstructor
@NoArgsConstructor
@Data
public class Cambio {
    private String from = "BRL";
    private String to = "USD";
    private Double factor;
    private Double value;
}
