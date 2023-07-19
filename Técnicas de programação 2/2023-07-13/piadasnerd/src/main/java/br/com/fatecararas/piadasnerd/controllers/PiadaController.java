package br.com.fatecararas.piadasnerd.controllers;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Controller;
import org.springframework.ui.Model;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.ModelAttribute;
import org.springframework.web.bind.annotation.PathVariable;
import org.springframework.web.bind.annotation.PostMapping;
import org.springframework.web.bind.annotation.RequestMapping;

import br.com.fatecararas.piadasnerd.models.Piada;
import br.com.fatecararas.piadasnerd.services.PiadaService;

@Controller
@RequestMapping("/piadas")
public class PiadaController {
    @Autowired
    private PiadaService service;

    @GetMapping
    public String home() {
        return "piadas";
    }

    @GetMapping("/criar")
    public String cadastrar(Piada piada) {
        return "cadastro";
    }

    @PostMapping("/salvar")
    public String salvar(Piada piada) throws Exception {
        service.criar(piada);

        return "redirect:/piadas";
    }

    @PostMapping("/atualizar")
    public String atualizar(Piada piada) throws Exception {
        service.atualizar(piada);

        return "redirect:/piadas";
    }

    @GetMapping("/editar/{id}")
    public String preEdicao(@PathVariable("id") Integer id, Model model) {
        Piada piada = service.buscarPorId(id);

        model.addAttribute("piada", piada);

        return "cadastro";
    }

    @GetMapping("/excluir/{id}")
    public String excluir(@PathVariable("id") Integer id) {
        service.excluir(id);

        return "redirect:/piadas";
    }

    @PostMapping("/buscar")
    public String busca(@ModelAttribute Piada piada, Model model) {
        List<Piada> piadas = this.service.buscar(piada.getDescricao());

        model.addAttribute("piadas", piadas);

        return "piadas";
    }

    @ModelAttribute(name = "piadas")
    public List<Piada> getPiadas() {
        return service.buscarTodas();
    }

    @ModelAttribute(name = "piada")
    public Piada getPiada() {
        return new Piada();
    }
}
