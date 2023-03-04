import 'package:flutter/material.dart';
import 'package:flutter_application_2/utils/scroll_behavior.dart';

class MainApp extends StatelessWidget {
  const MainApp({required this.children, required this.title, super.key});

  final String title;
  final List<Widget> children;

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      scrollBehavior: AppScrollBehavior(),
      home: Scaffold(
        appBar: AppBar(
          title: const Text(title),
        ),
        body: Column(
          children: children,
        ),
        floatingActionButton: FloatingActionButton(
          child: const Icon(Icons.favorite),
          onPressed: () {
            // ignore: avoid_print
            print('Click');
          },
        ),
      ),
    );
  }
}
