import 'package:flutter/material.dart';

import '../../../model/currency_model.dart';

class CurrencyWidget extends StatelessWidget {
  const CurrencyWidget({
    super.key,
    required this.currency,
  });

  final CurrencyModel currency;

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        leading: CircleAvatar(
          child: Text(currency.name!.substring(0, 3)),
        ),
        title: Text(currency.name!),
        subtitle: Text(
          'Buy: ${currency.buy} - Sell: ${currency.sell ?? 'ND'} - Var: ${currency.variation}',
        ),
      ),
    );
  }
}
