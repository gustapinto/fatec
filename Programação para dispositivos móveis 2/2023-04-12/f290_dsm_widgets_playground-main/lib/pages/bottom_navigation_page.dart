import 'package:f290_dsm_widgets_playground/pages/butons_input_page.dart';
import 'package:f290_dsm_widgets_playground/pages/moedas/cotacao_moedas_page.dart';
import 'package:f290_dsm_widgets_playground/pages/moedas/models/currency_model.dart';
import 'package:flutter/material.dart';

import 'TextInput.dart';

class BottomNavigationPage extends StatefulWidget {
  const BottomNavigationPage({super.key});

  @override
  State<BottomNavigationPage> createState() => _BottomNavigationPageState();
}

class _BottomNavigationPageState extends State<BottomNavigationPage> {
  var pages = [
    const CotacaoMoedasPage(currencies: currencies),
    Container(color: Colors.deepPurple),
    Container(color: Colors.pink),
  ];

  int _selectedIndex = 0;
  List<CurrencyModel> currencies = [];

  @override
  void initState() {


    // TODO: implement initState
    super.initState();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(title: const Text('Text Inputs')),
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
