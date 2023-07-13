package daorepository.model;

// OBS: VO == Value Object
public record ContatoVO(
    Integer id,
    String nome,
    String email,
    String telefone
) {}
