import 'package:f290_dsm_widgets_playground/pages/moedas/models/currency_model.dart';
import 'package:flutter/material.dart';

class FinanceCardWidget extends StatelessWidget {
  const FinanceCardWidget({
    super.key,
    required this.currency,
  });

  final CurrencyModel currency;

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        leading: CircleAvatar(backgroundColor: Colors.yellow.shade400,),
        title: Text('${currency.name} - ${currency.currency}'),
        subtitle: Column(
          crossAxisAlignment: CrossAxisAlignment.start,
          children: [
            Text('Preço de compra: ${currency.buy}'),
            Text("Preço de venda: ${currency.sell}"),
            Text('Variação: ${currency.variation}'),
          ],
        ),
      ),
    );
  }
}
