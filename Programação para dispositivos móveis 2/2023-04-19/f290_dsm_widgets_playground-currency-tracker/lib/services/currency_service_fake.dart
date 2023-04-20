import 'package:f290_dsm_widgets_playground/model/currency_model.dart';

class FakeCurrencyService {
  List<CurrencyModel> getAllCurrencies() {
    return [
      CurrencyModel(
          name: 'Dollar', buy: 4.9191, sell: 4.9191, variation: -1.761),
      CurrencyModel(name: 'Euro', buy: 5.4071, sell: 5.4071, variation: -1.053),
      CurrencyModel(
          name: "Pound Sterling", buy: 6.14, sell: null, variation: -1.318),
      CurrencyModel(
          name: "Japanese Yen", buy: 0.0369, sell: null, variation: -1.468),
    ];
  }
}
