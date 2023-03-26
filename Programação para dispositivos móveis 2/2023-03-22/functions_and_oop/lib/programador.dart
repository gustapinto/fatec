import 'package:functions_and_oop/funcionario.dart';
import 'package:functions_and_oop/interfaces/aprovar_projeto.dart';
import 'package:functions_and_oop/mixins/dba.dart';
import 'package:functions_and_oop/mixins/designer.dart';

class Programador extends Funcionario
    with DBA, Designer
    implements AprovarProjeto {
  List<String> stack = [];

  Programador(
      {int? matricula,
      String? nome,
      String? sobrenome,
      String? telefone,
      String? email,
      required List<String> stack})
      : super(matricula,
            nome: nome, sobrenome: sobrenome, email: email, telefone: telefone);

  @override
  void aprovar(String p) {
    print("Aprovando projeto $p");
  }
}
