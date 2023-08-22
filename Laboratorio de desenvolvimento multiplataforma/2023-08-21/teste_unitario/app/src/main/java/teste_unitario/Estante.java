package teste_unitario;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Stream;

import lombok.Data;
import teste_unitario.pojos.Livro;

@Data
public class Estante {
    private List<Livro> livros = new ArrayList<>();

    public void adicionar(Livro... livros) {
        Stream.of(livros).forEach(livro -> this.livros.add(livro));
    }

    public List<Livro> livros() {
        return this.livros;
    }
}
