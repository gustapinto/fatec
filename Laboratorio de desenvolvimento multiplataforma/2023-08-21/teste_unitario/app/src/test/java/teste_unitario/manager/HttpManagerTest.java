package teste_unitario.manager;

import static org.mockito.ArgumentMatchers.any;

import java.io.IOException;
import java.util.Optional;

import org.junit.jupiter.api.Assertions;
import org.junit.jupiter.api.Test;
import org.mockito.Mockito;

import kotlin.Pair;
import okhttp3.Call;
import okhttp3.MediaType;
import okhttp3.OkHttpClient;
import okhttp3.Protocol;
import okhttp3.Request;
import okhttp3.Response;
import okhttp3.ResponseBody;

public class HttpManagerTest {
    @Test
    void get() throws IOException {
        String url = "http://api/hgbrasil.com/weather";

        // Mockito.mock(...) -> Cria uma versão mockada para testes, ou seja, sem
        // comportamento real da classe passada
        OkHttpClient mockOkHttpClient = Mockito.mock(OkHttpClient.class);
        Call mockCall = Mockito.mock(Call.class);

        Request request = new Request.Builder().url(url).build();
        Response response = new Response.Builder()
                .request(request)
                // <response builder>.protocol(...) -> Configura o protocolo HTTP
                // que será usado na resposta
                .protocol(Protocol.HTTP_2)
                // <response builder>.code(...) -> Configura o código HTTP da
                // resposta
                .code(200)
                .message("")
                // <response builder>.body(...) -> Define o corpo que será retornado
                // na resposta
                //
                // ResponseBody.create(...) -> Cria um novo corpo de resposta a
                // partir de uma string e um MediaType
                //
                // MediaType.parse(...) -> Cria um MediaType a partir de uma string
                .body(ResponseBody.create(
                        "{\"code\": 200, \"message\": \"Lorem ipsum dolor sit amet\"}",
                        MediaType.parse("\"application/json; charset=utf-8\"")))
                // <response builder>.build() -> Construi a resposta a partir de
                // todas as configurações passadas
                .build();

        // Mockito.when(...) -> Define uma ação que irá executar no lugar do método
        // passado
        //
        // any(...) -> Mocka a classe passada, retorna um valor qualquer, é usada
        // quando não se importa com o valor real gerado
        Mockito.when(mockOkHttpClient.newCall(any(Request.class)))
                // <mockito stub>.thenReturn -> Configura o valor a ser retornado
                // quando o método passado no "Mockito.when(...)" for executado
                .thenReturn(mockCall);
        Mockito.when(mockCall.execute())
                .thenReturn(response);

        // Injeta o cliente OKHttp mockado no HttpManager
        HttpManager httpManager = new HttpManager(mockOkHttpClient);

        Optional<Pair<Integer, String>> res = httpManager.get(url);

        Assertions.assertDoesNotThrow(() -> httpManager.get(url));

        // <optional>.isPresent() -> Valida se o Optional<?> contém ou não um
        // valor
        Assertions.assertTrue(res.isPresent());

        // <optional>.get() -> Retorna o valor embrulhado pelo Optional<?>
        //
        // <pair>.getFirst() -> Obtém o primeiro elemento do Pair<?,?>
        Assertions.assertEquals(200, res.get().getFirst());

        // Assertions.assertFalse -> Espera que o valor passado seja falso
        Assertions.assertFalse(res.get().getSecond().isEmpty());
    }
}
