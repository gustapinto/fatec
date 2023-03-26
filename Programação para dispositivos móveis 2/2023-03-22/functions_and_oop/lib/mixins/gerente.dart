import 'package:functions_and_oop/funcionario.dart';
import 'package:functions_and_oop/interfaces/pagamento.dart';

mixin Gerente implements IPagamento {
  void autorizarFerias(Funcionario f) {
    print("Autorizando férias do funcionário ${f.nome}");
  }

  @override
  void autorizarPagamento(Funcionario f) {
    print("Autorizando pagamento do funcionario ${f.nome}");
  }
}
