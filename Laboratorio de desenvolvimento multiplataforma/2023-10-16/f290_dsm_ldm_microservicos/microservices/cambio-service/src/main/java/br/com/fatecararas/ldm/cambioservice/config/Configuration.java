package br.com.fatecararas.ldm.cambioservice.config;


import org.springframework.context.annotation.Bean;
import org.springframework.stereotype.Component;
import org.springframework.web.client.RestTemplate;

@Component
public class Configuration {

    @Bean
    public RestTemplate getRestTemplate() {
        return new RestTemplate();
    }
}
