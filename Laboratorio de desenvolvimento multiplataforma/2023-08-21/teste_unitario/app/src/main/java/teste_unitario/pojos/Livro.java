package teste_unitario.pojos;

import lombok.AllArgsConstructor;
import lombok.Data;

// @Data -> Gera os métodos getters e setters automaticamente para todas as
// propriedades da classe, também gera um método toString() pré formatado
@Data
// @AllArgsConstructor -> Gera um construtor automaticamente com todas as
// propriedades da classe
@AllArgsConstructor
public class Livro {
    private Integer id;
    private String titulo;
    private String autor;
    private String isbn;
}
