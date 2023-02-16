import 'package:flutter/material.dart';

void main(List<String> args) {
  String hello = 'Hello World!';
  String foo = 'Foobar';

  // runApp Inicia o aplicativo
  //
  // Em flutter os componentes visuais são compostos por widgets, que são
  // classes Dart
  runApp(
    MaterialApp(
      theme: ThemeData(
        primarySwatch: Colors.green,
      ),
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Foo bar'),
        ),
        backgroundColor: Colors.greenAccent.shade400,
        body: Center(
          child: Container(
            // Containeres atuam como divs
            color: Colors.white60,
            // width: double.infinity,
            height: 200,
            padding: const EdgeInsets.all(16),
            margin: const EdgeInsets.all(16),
            child: Column(
              mainAxisSize: MainAxisSize.min,
              children: [
                Text(
                  hello,
                  style: const TextStyle(
                    color: Colors.black,
                    fontSize: 24,
                    fontWeight: FontWeight.bold,
                  ),
                  textAlign: TextAlign.end,
                ),
                Align(
                  alignment: Alignment.bottomRight,
                  child: Text(
                    foo,
                    style: const TextStyle(
                      color: Colors.black,
                      fontSize: 20,
                    ),
                    textAlign: TextAlign.end,
                  ),
                )
              ],
            ),
          ),
        ),
      ),
    ),
  );
}
