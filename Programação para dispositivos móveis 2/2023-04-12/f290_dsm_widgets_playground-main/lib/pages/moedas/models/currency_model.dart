import 'dart:convert';

class CurrencyModel {
  const CurrencyModel({
    required this.currency,
    required this.name,
    required this.buy,
    required this.sell,
    required this.variation,
  });

  final String currency;
  final String name;
  final double buy;
  final double sell;
  final double variation;

  factory CurrencyModel.fromMap(Map<String, dynamic> map) {
    return CurrencyModel(
      currency: map['currency'],
      name: map['name'],
      buy: map['buy'],
      sell: map['sell'],
      variation: map['variation'],
    );
  }

  factory CurrencyModel.fromJson(String source) {
    return CurrencyModel.fromMap(jsonDecode(source));
  }
}
