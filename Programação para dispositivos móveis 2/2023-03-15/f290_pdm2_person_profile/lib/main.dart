import 'package:f290_pdm2_person_profile/neo_profile_page.dart';
import 'package:flutter/material.dart';

void main() {
  runApp(const MainApp());
}

class MainApp extends StatelessWidget {
  const MainApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      theme: ThemeData(
        brightness: Brightness.dark,
        useMaterial3: true,
        colorSchemeSeed: Colors.blue,
      ),
      debugShowCheckedModeBanner: false,
      title: 'Ricieri Profile',
      home: const NeoProfilePage(),
    );
  }
}
