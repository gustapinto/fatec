import 'package:f290_dsm_widgets_playground/model/currency_model.dart';
import 'package:f290_dsm_widgets_playground/pages/moedas/cotacao_moedas_page.dart';
import 'package:f290_dsm_widgets_playground/services/currency_service.dart';
import 'package:f290_dsm_widgets_playground/services/currency_service_fake.dart';
import 'package:flutter/material.dart';

class BottomNavigationPage extends StatefulWidget {
  const BottomNavigationPage({super.key});

  @override
  State<BottomNavigationPage> createState() => _BottomNavigationPageState();
}

class _BottomNavigationPageState extends State<BottomNavigationPage> {
  static final service = FakeCurrencyService();

  var pages = [
    CotacaoMoedasPage(currencies: service.getAllCurrencies()),
    Container(color: Colors.deepPurple),
    Container(color: Colors.pink),
  ];

  int _selectedIndex = 0;

  @override
  void initState() {
    _obterCotacoes();
    super.initState();
  }

  _obterCotacoes() async {
    CurrencyService service = CurrencyService();

    var retorno = await service.getData();

    var currencies = await service.getCurrencies();

    print(currencies);

    // print('RETORNO: $retorno');
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text('Currency Wall')),
      body: IndexedStack(
        index: _selectedIndex,
        children: pages,
      ),
      bottomNavigationBar: BottomNavigationBar(
        currentIndex: _selectedIndex,
        onTap: (index) {
          setState(() {
            _selectedIndex = index;
          });
        },
        items: const [
          BottomNavigationBarItem(
            activeIcon: Icon(Icons.feed),
            icon: Icon(Icons.feed_outlined),
            label: 'Feed',
          ),
          BottomNavigationBarItem(
            activeIcon: Icon(Icons.favorite),
            icon: Icon(Icons.favorite_outline),
            label: 'Favs',
          ),
          BottomNavigationBarItem(
            activeIcon: Icon(Icons.settings),
            icon: Icon(Icons.settings_outlined),
            label: 'Conf',
          ),
        ],
      ),
    );
  }
}
