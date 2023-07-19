package br.com.fatecararas.piadasnerd.controllers;

import java.util.Arrays;
import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.DeleteMapping;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestParam;

import br.com.fatecararas.piadasnerd.models.Piada;
import br.com.fatecararas.piadasnerd.services.PiadaService;

@Controller
@RequestMapping("/")
public class IndexController {
    @Autowired
    private PiadaService piadaService;

    @GetMapping
    public String index(Model model) {
        model.addAttribute("titulo", "Salve mano");
        model.addAttribute("comediantes", Arrays.asList(
                "Thiago Ventura",
                "Afonso Padilha",
                "Bruna Louise"));

        List<Piada> piadas = this.piadaService.buscarTodas();

        model.addAttribute("piadas", piadas);

        return "index";
    }

    @GetMapping("/soma")
    public String soma(
        @RequestParam("x") int x, // Mapeando parâmetro com query string
        @RequestParam("y") int y
    ) {
        System.out.println(x + y);

        return "redirect:/";
    }

    @GetMapping("/soma/{x}/{y}")
    public String somaComPath(
        @PathVariable("x") int x, // Mapeando parâmetro com path
        @PathVariable("y") int y
    ) {
        System.out.println(x + y);

        return "redirect:/";
    }

    @PostMapping
    public String post() {
        System.out.println("POST!");

        return "index";
    }

    @DeleteMapping
    public String delete() {
        System.out.println("DELETE!");

        return "index";
    }

}
