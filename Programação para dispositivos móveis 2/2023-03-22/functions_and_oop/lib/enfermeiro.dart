import 'package:functions_and_oop/funcionario.dart';

class Enfermeiro extends Funcionario {
  Enfermeiro(
      {int? matricula,
      String? nome,
      String? sobrenome,
      String? telefone,
      String? email})
      : super(matricula,
            nome: nome, sobrenome: sobrenome, email: email, telefone: telefone);

  @override
  String toString() {
    return '''
Enfermeiro:
- Matricula: $matricula
- Nome: $nome
- Sobrenome: $sobrenome
- Email: $email
- Telefone: $telefone
''';
  }
}
