import 'dart:io';

/// Comentário de documentação
void main(List<String> arguments) {
  // Comentário de uma linha
  /*
   * Bloco de comentário
  */

  print("Hello World!");

  const int ano = 2023;
  const String filme = "Creed III";

  print("Em $ano estreia o filme ${filme}");
  print("A variável ano é do tipo ${ano.runtimeType}");
  print("Versão do Dart: ${Platform.version}");

  Aluno foo = Aluno("Foo");
  print("$foo");

  List<int> lista = [1, 2, 3, 4, 5, 6, 7, 8, 9];
  Map<String, String> mapa = {"lang": "Dart", "framework": "Flutter"};

  print(lista);
  print(mapa);
}

/// Declarando uma classe
class Aluno {
  String nome;

  // Construtor da classe
  Aluno(this.nome);

  @override
  String toString() {
    return "Aluno{nome=$nome}";
  }
}