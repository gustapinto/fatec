import 'package:f290_dsm_widgets_playground/pages/moedas/models/currency_model.dart';

class FakeCurrencyService {
  List<CurrencyModel> getAllCurrencies() {
    return const [
      CurrencyModel(
        currency: 'USD',
        name: 'Dolar',
        buy: 5.45,
        sell: 5.15,
        variation: 1.23,
      ),
      CurrencyModel(
        currency: 'BRL',
        name: 'Real',
        buy: 1,
        sell: 1,
        variation: 1,
      ),
    ];
  }
}
