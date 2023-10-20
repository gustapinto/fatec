package br.com.fatecararas.ldm.cambioservice.services;

import br.com.fatecararas.ldm.cambioservice.domain.dto.DefaultResponse;
import br.com.fatecararas.ldm.cambioservice.domain.repositories.DollarRepository;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.beans.factory.annotation.Value;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.scheduling.annotation.Scheduled;
import org.springframework.stereotype.Component;
import org.springframework.web.client.RestTemplate;

import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.Objects;


@Component
public class CurrencyService {
    private static final Logger log = LoggerFactory.getLogger(CurrencyService.class);
    private static final SimpleDateFormat format = new SimpleDateFormat("HH:mm:ss");

    @Autowired
    private RestTemplate restTemplate;
    @Autowired
    private DollarRepository dollarRepository;
    @Value("${cambio-service.hgbrasil-key}")
    private String key;

    @Scheduled(fixedRate = 600000)
    public void getCurrencies() {
        String url = "https://api.hgbrasil.com/finance?key=" + key;

        ResponseEntity<DefaultResponse> response = restTemplate
                .getForEntity(url, DefaultResponse.class);

        if (response.getStatusCode().equals(HttpStatus.OK)) {
            DefaultResponse data = response.getBody();
            if(Objects.nonNull(data)) {
                dollarRepository.save(data.results.currencies.usd);
                //TODO: Persisitir o Euro na entidade euro.
                log.info(data.toString());
            }
        }

        log.info("The time is now {}", format.format(new Date()));
    }
}
