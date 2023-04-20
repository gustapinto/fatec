import 'package:flutter/material.dart';

class HomePage extends StatelessWidget {
  const HomePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Home'),
      ),
      body: Column(
        children: [
          TextButton.icon(
            onPressed: () {
              Navigator.popAndPushNamed(context, '/second');
            },
            icon: const Icon(Icons.arrow_forward),
            label: const Text('Second page'),
          ),
          TextButton.icon(
            onPressed: () {
              Navigator.pushNamed(context, '/third');
            },
            icon: const Icon(Icons.arrow_forward),
            label: const Text('Third page'),
          ),
        ],
      ),
    );
  }
}
