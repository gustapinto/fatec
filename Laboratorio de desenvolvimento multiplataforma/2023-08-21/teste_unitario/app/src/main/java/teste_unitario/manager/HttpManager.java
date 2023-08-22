package teste_unitario.manager;

import java.io.IOException;
import java.util.Optional;

import kotlin.Pair;
import okhttp3.OkHttpClient;
import okhttp3.Request;
import okhttp3.Response;

public class HttpManager {
    private final OkHttpClient client;

    public HttpManager(OkHttpClient client) {
        // Usa injeção de dependência para instanciar o cliente OkHttp no objeto
        this.client = client;
    }

    public Optional<Pair<Integer, String>> get(String url) throws IOException {
        // Request.Builder -> Cria uma nova classe construtora de requests, que
        // são as requisições HTTP que serão realizadas
        Request request = new Request.Builder()
                .url(url)
                .build();

        // <client>.newCall -> Cria uma nova chamada HTTP com base na requisição
        // passada
        //
        // <call>.execute -> Executa a chamada, realizando a requisição e trazendo
        // a resposta
        try (Response response = this.client.newCall(request).execute()) {
            return Optional.of(new Pair<>(response.code(), response.body().string()));
        }
    }
}
