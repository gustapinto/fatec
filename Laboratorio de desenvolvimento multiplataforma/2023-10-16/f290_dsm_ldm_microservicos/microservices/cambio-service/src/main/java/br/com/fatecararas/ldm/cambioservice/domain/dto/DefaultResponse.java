package br.com.fatecararas.ldm.cambioservice.domain.dto;

import br.com.fatecararas.ldm.cambioservice.domain.entities.EUR;
import br.com.fatecararas.ldm.cambioservice.domain.entities.USD;
import com.fasterxml.jackson.annotation.JsonIgnoreProperties;
import com.fasterxml.jackson.annotation.JsonProperty;

@JsonIgnoreProperties(ignoreUnknown = true)
public class DefaultResponse {

    public Results results;

    @Override
    public String toString() {
        return "DefaultResponse [results=" + results + "]";
    }
}




