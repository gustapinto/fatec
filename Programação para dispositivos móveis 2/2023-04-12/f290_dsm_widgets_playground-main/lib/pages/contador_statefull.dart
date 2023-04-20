import 'package:f290_dsm_widgets_playground/share/bmi_card_widget.dart';
import 'package:flutter/material.dart';

class ContadorStatefull extends StatefulWidget {
  final String title;

  const ContadorStatefull({required this.title});

  @override
  State<StatefulWidget> createState() => _ContadorStatefullState();
}

class _ContadorStatefullState extends State<ContadorStatefull> {
  int _counter = 0;

  _increment() {
    setState(() {
      _counter++;
      print('Valor atual do contador $_counter');
    });
  }

  @override
  Widget build(BuildContext context) {
    print('Execução do build!');
    return Scaffold(
      appBar: AppBar(title: Text(widget.title)),
      body: Center(
        child: Column(
          mainAxisSize: MainAxisSize.max,
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text(
              '$_counter',
              style: const TextStyle(fontSize: 48, fontWeight: FontWeight.w600),
            ),
            Text('Voce incrementou $_counter vezes o contador.'),
          ],
        ),
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: _increment,
        child: const Icon(Icons.add),
      ),
    );
  }
}
