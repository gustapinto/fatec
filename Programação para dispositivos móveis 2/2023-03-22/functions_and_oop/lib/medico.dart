import 'package:functions_and_oop/funcionario.dart';
import 'package:functions_and_oop/mixins/gerente.dart';
import 'package:functions_and_oop/interfaces/pagamento.dart';

class Medico extends Funcionario with Gerente implements IPagamento {
  int crm;

  Medico(
      {int? matricula,
      String? nome,
      String? sobrenome,
      String? telefone,
      String? email,
      required this.crm})
      : super(matricula,
            nome: nome, sobrenome: sobrenome, telefone: telefone, email: email);

  @override
  String toString() {
    return '''
Médico:
- Matricula: $matricula
- Nome: $nome
- Sobrenome: $sobrenome
- Email: $email
- Telefone: $telefone
- CRM: $crm
''';
  }

  void executaCirurgia(Funcionario funcionario) {
    print('Realizando cirurgia no funcionário ${funcionario.nome}');
  }
}
