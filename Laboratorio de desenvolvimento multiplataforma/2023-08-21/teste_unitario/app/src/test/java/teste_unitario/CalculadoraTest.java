package teste_unitario;

import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.DisplayName;
import org.junit.jupiter.api.Test;

public class CalculadoraTest {
    public static Calculadora calculadora;

    // @BeforaAll -> Método executado antes de todos os outros testes
    @BeforeAll
    static void setupAll() {
        calculadora = new Calculadora();
    }

    // @BeforeEach -> Método executado antes de cada teste
    @BeforeEach
    void setup() {
        System.out.println("@BeforeEach");
    }

    // @AfterAll -> Método executado após todos os outros testes da classe terminarem
    @AfterAll
    static void teardownAll() {
        System.out.println("@AfterAll");
    }

    // @AfterEach -> Método executado após cada teste
    @AfterEach
    void teardown() {
        System.out.println("@AfterEach");
    }

    // @Test -> Declara que o método que está sendo anotado é um teste do JUnit
    @Test
    // @DisplayName -> Altera o nome exibido no teste
    @DisplayName("Testa soma de dois valores")
    void deveRetornarSomaDeDoisValoresTest() {
        // Arrange -> Etapa em que todo o ambiente de testes é preparado, com as
        // classes e variáveis usadas sendo instanciandas e os
        // resultados esperados sendo definidos
        //
        // OBS: variáveis declaradas como "final" para que não possam ser
        // modificadas durante o teste
        final Double x = 10D;
        final Double y = 10D;
        final Double resultadoEsperado = 20D;

        // Act -> Etapa em que os métodos são executados e os resultados são
        // coletados
        final Double resultadoObtido = calculadora.soma(x, y);

        // Assert -> Etapa em que os resultados são comparados com base nas
        // expectativas do teste
        //
        // Assertions.assertDoesNotThrow -> Espera que a operação passada não
        // dispare uma exceção
        Assertions.assertDoesNotThrow(() -> calculadora.soma(x, y));
        // Assertions.assertEquals -> Espera que os valores passados sejam iguais
        Assertions.assertEquals(resultadoEsperado, resultadoObtido);
        // Assertiions.assertNotNull -> Espera que o valor passado não seja null
        Assertions.assertNotNull(resultadoObtido);
    }

    @Test
    @DisplayName("Testa diferença de dois valores")
    void deveRetornarADiferencaDeDoisValoresTest() {
        final Double x = 10D;
        final Double y = 5D;
        final Double resultadoEsperado = 5D;
        final Double resultadoObtido = calculadora.diferenca(x, y);

        Assertions.assertEquals(resultadoEsperado, resultadoObtido);
    }
}
