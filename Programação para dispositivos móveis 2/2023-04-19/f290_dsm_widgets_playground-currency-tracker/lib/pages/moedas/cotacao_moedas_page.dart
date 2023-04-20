import 'package:f290_dsm_widgets_playground/model/currency_model.dart';
import 'package:f290_dsm_widgets_playground/pages/moedas/widgets/currency_widget.dart';
import 'package:f290_dsm_widgets_playground/services/currency_service.dart';
import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:loading_indicator/loading_indicator.dart';

class CotacaoMoedasPage extends StatelessWidget {
  List<CurrencyModel>? currencies;
  static CurrencyService service = CurrencyService();

  CotacaoMoedasPage({super.key, required this.currencies});

  @override
  Widget build(BuildContext context) {
    return FutureBuilder(
      future: service.getCurrencies(),
      builder: (context, snapshot) {
        if (snapshot.connectionState == ConnectionState.none ||
            snapshot.connectionState == ConnectionState.waiting) {
          return const Center(
            child: SizedBox(
              height: 200,
              child: LoadingIndicator(
                indicatorType: Indicator.pacman,
                colors: [
                  Colors.yellow,
                  Colors.orange,
                  Colors.red,
                ],
              ),
            ),
          );
        }

        if (snapshot.hasError) {
          return const Center(
            child: Icon(
              FontAwesomeIcons.faceFrown,
              size: 150,
            ),
          );
        }

        currencies = snapshot.data;

        return ListView.builder(
          itemCount: currencies!.length,
          itemBuilder: (context, index) {
            return CurrencyWidget(
              currency: currencies![index],
            );
          },
        );
      },
    );
  }
}
