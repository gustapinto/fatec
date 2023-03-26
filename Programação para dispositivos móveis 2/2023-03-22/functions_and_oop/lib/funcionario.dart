class Funcionario {
  // Atributos da classe
  int? matricula;
  String? _nome;
  String? sobrenome;
  String? email;
  String? titulacao;
  String? telefone;

  // Getters e setters
  get nome => _nome;
  set(String novoNome) => _nome = novoNome;

  // Construtor da classe
  Funcionario(this.matricula,
      {nome, this.sobrenome, this.email, this.titulacao, this.telefone})
      : _nome = nome;

  // Métodos
  String getNomeCompleto() {
    return "$nome $sobrenome";
  }

  String getNomeCompletoComTitulacao() {
    return "${titulacao ?? ''} ${getNomeCompleto()}".trim();
  }
}
