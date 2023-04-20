import 'package:f290_dsm_widgets_playground/pages/moedas/models/currency_model.dart';
import 'package:f290_dsm_widgets_playground/pages/moedas/widgets/business_card_widget.dart';
import 'package:f290_dsm_widgets_playground/pages/moedas/widgets/finance_card_widget.dart';
import 'package:flutter/material.dart';
import 'package:faker/src/faker.dart';

class CotacaoMoedasPage extends StatelessWidget {
  const CotacaoMoedasPage({super.key, required this.currencies});

  final List<CurrencyModel> currencies;

  @override
  Widget build(BuildContext context) {
    final List<CurrencyModel> items = this.currencies;

    return ListView.builder(
      itemCount: items.length,
      itemBuilder: (context, index) {
        return FinanceCardWidget(
          currency: items[index],
        );
      },
    );
  }
}
