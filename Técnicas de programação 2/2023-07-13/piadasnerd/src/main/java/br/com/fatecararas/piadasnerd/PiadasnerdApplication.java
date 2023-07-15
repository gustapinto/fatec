package br.com.fatecararas.piadasnerd;

import java.util.Arrays;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.boot.CommandLineRunner;
import org.springframework.boot.SpringApplication;
import org.springframework.boot.autoconfigure.SpringBootApplication;

import br.com.fatecararas.piadasnerd.models.Piada;
import br.com.fatecararas.piadasnerd.repositories.PiadaRepository;

@SpringBootApplication
public class PiadasnerdApplication implements CommandLineRunner {
    @Autowired
    private PiadaRepository repository;

    public static void main(String[] args) {
        SpringApplication.run(PiadasnerdApplication.class, args);
    }

    @Override
    public void run(String... args) throws Exception {
        List<Piada> piadas = Arrays.asList(
                new Piada("O que C++ disse para o C?", "Você não tem classe"),
                new Piada("O que o C:/DarthVader disse para C:/DarthVader/Luke?", "Luke, I am your folder!"),
                new Piada(
                        "Sarah Connor e T-1000 viajam no tempo para evitar o Apocalipse. - Agora que chegamos á base da Skynet, como sabotamos o mainframe?",
                        "- Instala Vista, baby"));

        this.repository.saveAll(piadas);
    }

}
