import 'package:flutter/material.dart';
import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:flutter_sqlite/models/repositories/nota_repository.dart';
import 'package:flutter_sqlite/pages/form_nota_page.dart';
import 'package:provider/provider.dart';

class HomePage extends StatelessWidget {
  HomePage({super.key, required this.title});

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
          Navigator.push(
            context,
            MaterialPageRoute(
              builder: (context) {
                return const FormNotaPage();
              },
            ),
          );
        },
        tooltip: 'Increment',
        child: const Icon(Icons.add),
      ),
    );
  }
}