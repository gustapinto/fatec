import 'package:demo_stateful_widget/cards/bmi.dart';
import 'package:flutter/material.dart';

class HomePage extends StatefulWidget {
  const HomePage({required this.title, super.key});

  final String title;

  @override
  State<HomePage> createState() {
    return HomePageState();
  }
}

class HomePageState extends State<HomePage> {
  int counter = 0;
  String texto = '';

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Align(
          alignment: Alignment.center,
          child: Text(widget.title),
        ),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              'Contador',
              style: Theme.of(context).textTheme.bodyLarge,
            ),
            Text(
              "Você já clicou $counter vezes $texto",
              style: Theme.of(context).textTheme.headlineMedium,
            ),
            (counter >= 50
                ? const BmiCard(icon: Icons.question_mark, descricao: 'Mano?')
                : const Text(''))
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          setState(() {
            counter++;

            if (counter > 10 && counter < 20) {
              texto = 'tá tudo bem?';
            } else if (counter >= 20 && counter < 50) {
              texto = 'mano to ligando pro SAMU, você não tá bem';
            } else if (counter >= 50) {
              texto = "PIPAPAPARAPO PIIIIPAPAPARAPO";
            }
          });
        },
        child: const Icon(Icons.add),
      ),
    );
  }
}
