import 'package:flutter/material.dart';
import 'package:flutter_sqlite/models/db/objectbox_database.dart';
import 'package:flutter_sqlite/models/repositories/nota_repository.dart';
import 'package:flutter_sqlite/objectbox.g.dart';
import 'package:flutter_sqlite/pages/home_page.dart';
import 'package:provider/provider.dart';

late final Store store;

void main() async {
  // Aguarda que todos os widgets estejam inicializados
  WidgetsFlutterBinding.ensureInitialized();

  final ObjectBoxDatabase database = ObjectBoxDatabase();
  store = await database.getStore();

  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MultiProvider(
      providers: [
        ChangeNotifierProvider<NotaRepository>(
          create: (BuildContext context) {
            return NotaRepository(store);
          },
        ),
      ],
      child: MaterialApp(
        title: 'Flutter Demo',
        theme: ThemeData(
          brightness: Brightness.dark,
          useMaterial3: true,
          colorSchemeSeed: Colors.orange,
        ),
        home: HomePage(title: 'Notas'),
      ),
    );
  }
}
