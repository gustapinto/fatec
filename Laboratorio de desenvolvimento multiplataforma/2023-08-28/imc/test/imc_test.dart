import 'package:flutter_test/flutter_test.dart';
import 'package:imc/domain/imc_controller.dart';

void main() {
  test('Teste Calcular IMC', () {
    // Arrange
    var imcController = IMCController();
    double altura = 1.8;
    double peso = 70.0;
    double imcEsperado = 25.0;

    // Act
    double imc = imcController.calcularImc(peso, altura);

    // Assert
    expect(imcEsperado, imc);
  });
}