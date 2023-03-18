import 'package:dart_oop/funcionario.dart';

void main(List<String> arguments) {
  var f1 = Funcionario(123456,
      nome: 'Pseudo', email: 'pseudo@enzo.com', sobrenome: 'Enzo', titulacao: 'SLA');

  print("Matricula.....${f1.matricula}");
  print("Nome..........${f1.getNomeCompletoComTitulacao()}");
  print("Email.........${f1.email}");
}
