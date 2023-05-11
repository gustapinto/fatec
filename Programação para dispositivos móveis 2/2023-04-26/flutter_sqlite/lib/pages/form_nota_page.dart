import 'package:flutter/material.dart';
import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:flutter_sqlite/models/repositories/nota_repository.dart';
import 'package:provider/provider.dart';

class FormNotaPage extends StatefulWidget {
  const FormNotaPage({super.key});

  @override
  State<FormNotaPage> createState() => _FormNotaPageState();
}

class _FormNotaPageState extends State<FormNotaPage> {
  final GlobalKey<FormState> formKey = GlobalKey<FormState>();

  String? titulo = '';
  String? descricao = '';

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Cadastro'),
      ),
      body: Form(
        key: formKey,
        child: Container(
          margin: const EdgeInsets.all(25),
          child: Column(
            children: [
              TextFormField(
                decoration: const InputDecoration(
                  labelText: 'Titulo',
                ),
                onSaved: (String? newValue) {
                  titulo = newValue;
                },
              ),
              TextFormField(
                maxLines: null,
                keyboardType: TextInputType.multiline,
                decoration: const InputDecoration(
                  labelText: 'Descrição',
                ),
                onSaved: (String? newValue) {
                  descricao = newValue;
                },
              ),
              Container(
                margin: const EdgeInsets.only(top: 20),
                child: ElevatedButton(
                  onPressed: () {
                    formKey.currentState!.save();

                    final Nota nota = Nota(
                      titulo: titulo!,
                      descricao: descricao!,
                    );

                    Provider.of<NotaRepository>(context, listen: false)
                        .salvar(nota);
                    Provider.of<NotaRepository>(context, listen: false)
                        .obterNotas();
                    Navigator.pop(context);
                  },
                  child: const Text('Enviar'),
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
