package teste_unitario;

import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import teste_unitario.pojos.Livro;

public class EstanteTest {
    public static Estante estante;

    @BeforeAll
    static void setupAll() {
        estante = new Estante();
    }

    @Test
    @DisplayName("Deve possuir lista de livros vazia ao iniciar a Estante")
    void devePossuirListaVaziaAoIniciar() {
        List<Livro> livros = estante.livros();

        Assertions.assertTrue(livros.isEmpty());
    }
}
