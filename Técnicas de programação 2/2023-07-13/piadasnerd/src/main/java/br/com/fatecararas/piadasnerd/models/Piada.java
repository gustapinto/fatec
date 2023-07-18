package br.com.fatecararas.piadasnerd.models;

import jakarta.persistence.Entity;
import jakarta.persistence.GeneratedValue;
import jakarta.persistence.GenerationType;
import jakarta.persistence.Id;
import jakarta.persistence.Table;

@Entity
@Table(name = "piadas")
public class Piada {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    private Integer id;

    private String descricao;
    private String resposta;
    private boolean possuiResposta;

    public Piada() {
    }

    public Piada(String descricao, String resposta, boolean possuiResposta) {
        this.descricao = descricao;
        this.resposta = resposta;
        this.possuiResposta = possuiResposta;
    }

    public Piada(String descricao, String resposta) {
        this(descricao, resposta, (resposta != null && !resposta.isBlank()));
    }

    public Integer getId() {
        return id;
    }

    public void setId(Integer id) {
        this.id = id;
    }

    public String getDescricao() {
        return descricao;
    }

    public void setDescricao(String descricao) {
        this.descricao = descricao;
    }

    public String getResposta() {
        return resposta;
    }

    public void setResposta(String resposta) {
        this.resposta = resposta;
    }

    public boolean getPossuiResposta() {
        return this.possuiResposta;
    }

    public void setPossuiResposta(boolean possuiResposta) {
        this.possuiResposta = possuiResposta;
    }
}
