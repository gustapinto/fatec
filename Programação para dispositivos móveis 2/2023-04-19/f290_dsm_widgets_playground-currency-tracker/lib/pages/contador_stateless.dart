import 'package:flutter/material.dart';

class ContadorStateless extends StatelessWidget {
  final String title;
  int _counter = 0;

  ContadorStateless({required this.title});

  _increment() {
    _counter++;
    print('Valor atual do contador $_counter');
  }

  @override
  Widget build(BuildContext context) {
    print('Execução do build!');
    return Scaffold(
      appBar: AppBar(title: Text(title)),
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
