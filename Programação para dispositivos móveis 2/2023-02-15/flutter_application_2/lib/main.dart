import 'package:flutter/material.dart';
import 'package:flutter_application_2/pages/new_profile.dart';
import 'package:flutter_application_2/utils/scroll_behavior.dart';

void main() {
  runApp(const MainApp());
}

class MainApp extends StatelessWidget {
  const MainApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData(
        useMaterial3: true,
        brightness: Brightness.dark,
        colorSchemeSeed: Colors.red,
      ),
      debugShowCheckedModeBanner: false,
      scrollBehavior: AppScrollBehavior(),
      home: const NewProfilePage()
    );
  }
}
