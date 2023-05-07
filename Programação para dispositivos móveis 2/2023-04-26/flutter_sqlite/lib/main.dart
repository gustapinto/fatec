import 'package:faker/faker.dart';
import 'package:flutter/material.dart';
import 'package:flutter_sqlite/models/db/objectbox_database.dart';
import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:flutter_sqlite/models/repositories/nota_repository.dart';
import 'package:flutter_sqlite/objectbox.g.dart';
import 'package:provider/provider.dart';

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
    return MultiProvider(
      providers: [
        Provider<ObjectBoxDatabase>(
          create: (BuildContext context) {
            return ObjectBoxDatabase();
          },
        ),
        ChangeNotifierProvider<NotaRepository>(
          create: (BuildContext context) {
            return NotaRepository(context.read());
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
        home: const MyHomePage(title: 'Flutter Demo Home Page'),
      ),
    );
  }
}
}

class MyHomePage extends StatelessWidget {
  const MyHomePage({super.key, required this.title});

  final faker = Faker();
  final String title;
  List<Nota> notas = [];

  // @override
  // void initState() {
  //   super.initState();

  //   context.read<NotaRepository>().obterNotas();
  // }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Notas'),
      ),
      body: Consumer<NotaRepository>(
        builder: (BuildContext context, NotaRepository value, child) {
          notas = value.notas;

          return ListView.separated(
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
          );
        },
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {
          final nota = Nota(
            titulo: faker.conference.name(),
            descricao: faker.lorem.sentence(),
          );

          Provider.of<NotaRepository>(context, listen: false).salvar(nota);
        },
        tooltip: 'Increment',
        child: const Icon(Icons.add),
      ),
    );
  }
}
