import 'dart:convert';

class CurrencyModel {
  String? name;
  double? buy;
  double? sell;
  double? variation;

  CurrencyModel({
    required this.name,
    this.buy = 0,
    this.sell = 0,
    this.variation = 0,
  });

  Map<String, dynamic> toMap() {
    return {
      'name': name,
      'buy': buy,
      'sell': sell,
      'variation': variation,
    };
  }

  factory CurrencyModel.fromMap(Map<String, dynamic> map) {
    return CurrencyModel(
      name: map['name'] ?? '',
      buy: map['buy']?.toDouble() ?? 0.0,
      sell: map['sell']?.toDouble() ?? 0.0,
      variation: map['variation']?.toDouble() ?? 0.0,
    );
  }

  String toJson() => json.encode(toMap());

  factory CurrencyModel.fromJson(String source) =>
      CurrencyModel.fromMap(json.decode(source));
}
