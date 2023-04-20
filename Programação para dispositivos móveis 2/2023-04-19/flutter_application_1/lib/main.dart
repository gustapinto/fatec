import 'package:flutter/material.dart';
import 'package:flutter_application_1/pages/home_page.dart';
import 'package:flutter_application_1/pages/second_page.dart';
import 'package:flutter_application_1/pages/third_page.dart';

void main() {
  runApp(const App());
}

class App extends StatelessWidget {
  const App({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      routes: {
        '/': (context) {
          return const HomePage();
        },
        '/second': (context) {
          return SecondPage();
        },
        '/third': (context) {
          return const ThirdPage();
        },
      },
    );
  }
}
