import 'dart:math';

import 'package:functions_and_oop/enfermeiro.dart';
import 'package:functions_and_oop/medico.dart';

void main(List<String> args) {
  final enfermeiro = Enfermeiro(
      matricula: 12345,
      nome: 'Angelo',
      sobrenome: 'Silvestre',
      email: 'angelo@enfermagens.com',
      telefone: '19 9999-9999');
  final medico = Medico(
      matricula: 12345,
      nome: 'João',
      sobrenome: 'Cleber',
      email: 'joao@medicinas.com',
      telefone: '19 9999-9999',
      crm: 12345678);

  print(enfermeiro);
  print(medico);

  medico.executaCirurgia(enfermeiro);
  medico.autorizarFerias(enfermeiro);

  print("\n\n\n");

  // Funções são tipos, portanto podem ser tratadas como variáveis
  // var multi = multiplica;

  // print(multi(5, 10));

  // Definindo uma função anonima
  // triple(n) => n * 3;

  // print(triple(5));

  // double m = media(1, 2, 3, 4, calcular: mediaSimples);
  // double mPonderada = media(1, 2, 3, 4, calcular: mediaPonderada);

  // print(m);
  // print(mPonderada);

  // print("\n\n\n");

  // print(numeroPrimo(4));
  // print(numeroPrimo(15));
  // print(numeroPrimo(2));
  // print(numeroPrimo(7));
  // print(numeroPrimo(19));
}

// Declara funções da forma tradicional
double media(double a, double b, double c, double d,
    {required Function calcular}) {
  return calcular(a, b, c, d);
}

double mediaSimples(a, b, c, d) {
  return (a + b + c + d) / 4;
}

double mediaPonderada(a, b, c, d) {
  double somaValores = (a * 1) + (b * 3) + (c * 2) + (d * 4);
  double somaPesos = 1 + 3 + 2 + 4;

  return somaValores / somaPesos;
}

// Declara função usando uma atribuição de função anônima
Function multiplica = (int a, int b) {
  return a * b;
};

bool numeroPrimo(int possivelPrimo) {
  for (int n = 2; n < possivelPrimo; n++) {
    if (possivelPrimo % n == 0) {
      return false;
    }
  }

  return true;
}
