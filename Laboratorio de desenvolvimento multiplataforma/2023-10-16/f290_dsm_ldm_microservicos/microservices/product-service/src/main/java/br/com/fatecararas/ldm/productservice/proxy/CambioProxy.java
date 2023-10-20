package br.com.fatecararas.ldm.productservice.proxy;

import org.springframework.cloud.openfeign.FeignClient;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;

import br.com.fatecararas.ldm.productservice.domain.Cambio;

@FeignClient(name = "cambio-service")
public interface CambioProxy {
    @GetMapping(value = "/cambio-service/{value}/BRL/USD")
    Cambio getCambio(@PathVariable("value") Double value);
}
