import 'package:faker/faker.dart';
import 'package:flutter/material.dart';
import 'package:flutter_sqlite/models/db/objectbox_database.dart';
import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:flutter_sqlite/objectbox.g.dart';

late final Store store;

void main() async {
  // Aguarda que todos os widgets estejam inicializados
  WidgetsFlutterBinding.ensureInitialized();

  final database = ObjectBoxDatabase();
  store = await database.getStore();

  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      title: 'Flutter Demo',
      theme: ThemeData(
        brightness: Brightness.dark,
        useMaterial3: true,
        colorSchemeSeed: Colors.orange,
      ),
      home: const MyHomePage(title: 'Flutter Demo Home Page'),
    );
  }
}

class MyHomePage extends StatefulWidget {
  const MyHomePage({super.key, required this.title});

  final String title;

  @override
  State<MyHomePage> createState() => _MyHomePageState();
}

class _MyHomePageState extends State<MyHomePage> {
  final faker = Faker();
  List<Nota> notas = [];

  @override
  void initState() {
    super.initState();

    notas = store.box<Nota>().getAll();

    print(notas);
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(widget.title),
      ),
      body: Center(
          child: ListView.separated(
        itemBuilder: (context, index) {
          return ListTile(
            leading: CircleAvatar(
              child: Text('${notas[index].id}'),
            ),
            title: Text(notas[index].titulo),
            subtitle: Text(notas[index].descricao),
          );
        },
        separatorBuilder: (context, index) {
          return const Divider(indent: 2);
        },
        itemCount: notas.length,
      )),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          final nota = Nota(
            titulo: faker.conference.name(),
            descricao: faker.lorem.sentence(),
          );

          store.box<Nota>().put(nota);

          notas = store.box<Nota>().getAll();

          print(notas);
        },
        tooltip: 'Increment',
        child: const Icon(Icons.add),
      ),
    );
  }
}
