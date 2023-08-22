package teste_unitario;

import java.util.List;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

import teste_unitario.pojos.Livro;

public class EstanteTest {
    private static Estante estante;

    @BeforeEach
    void setupAll() {
        estante = new Estante();
    }

    @Test
    @DisplayName("Deve possuir lista de livros vazia ao iniciar a Estante")
    void devePossuirListaVaziaAoIniciar() {
        final List<Livro> livros = estante.livros();

        Assertions.assertNotNull(estante.livros());
        Assertions.assertTrue(livros.isEmpty());
    }

    @Test
    void deveAdicionarLivroNaEstante() {
        final Livro livro1 = new Livro(1, "As egocentricas maldições de Souchi", "Junji Ito", "123456789");
        final Integer quatidadeEsperadaDeLivros = 1;

        estante.adicionar(livro1);

        Assertions.assertEquals(quatidadeEsperadaDeLivros, estante.livros().size());
    }
}
