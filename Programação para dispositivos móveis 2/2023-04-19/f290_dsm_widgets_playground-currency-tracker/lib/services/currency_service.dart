import 'dart:convert';
import 'dart:developer';

import 'package:f290_dsm_widgets_playground/model/currency_model.dart';
import 'package:http/http.dart';

class CurrencyService {
  final currenciesId = [
    'USD',
    'EUR',
    'GBP',
    'ARS',
    'CAD',
    'AUD',
    'JPY',
    'CNY',
    'BTC'
  ];

  Future<String> getData() async {
    Response response =
        await get(Uri.parse('https://api.hgbrasil.com/finance'));

    if (response.statusCode == 200) {
      return response.body;
    } else {
      log('Falha na requisição. Status Code: ${response.statusCode}. Body: ${response.body}');
      throw Exception('Code: ${response.statusCode}. Body: ${response.body}');
    }
  }

  Future<List<CurrencyModel>> getCurrencies() async {
    await Future.delayed(const Duration(seconds: 10));

    var data = await getData();
    var json = jsonDecode(data);
    var jsonCurrencies = json['results']['currencies'];

    return currenciesId
        .map((sigla) => CurrencyModel.fromMap(jsonCurrencies[sigla]))
        .toList();
  }
}
