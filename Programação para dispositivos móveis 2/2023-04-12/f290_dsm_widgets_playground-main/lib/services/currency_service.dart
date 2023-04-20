import 'dart:convert';

import 'package:http/http.dart';

class CurrencyService {
  Future<String> getData() async {
    final Response response = await get(Uri.parse('https://api.hgbrasil.com/finance'));

    if (response.statusCode == 200) {
      return response.body;
    }

    print('Falha na requisição, ${response.statusCode}, ${response.body}');

    throw Exception('${response.statusCode}, ${response.body}');
  }

  getCurrencies() async {
    String data = await getData();
    dynamic json = jsonDecode(data);
    dynamic jsonCurrencies = json['results']['currencies'];
  }
}
