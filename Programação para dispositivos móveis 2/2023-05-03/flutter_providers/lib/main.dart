import 'package:flutter/material.dart';
import 'package:provider/provider.dart';

void main() {
  runApp(const MyApp());
}

class MyApp extends StatelessWidget {
  const MyApp({super.key});

  final String dados = 'AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAa';

  // This widget is the root of your application.
  @override
  Widget build(BuildContext context) {
    return ChangeNotifierProvider<TextoProvider>(
      create: (BuildContext context) {
        return TextoProvider();
      },
      child: MaterialApp(
          title: 'Flutter Demo',
          theme: ThemeData(
            brightness: Brightness.dark,
            useMaterial3: true,
            colorSchemeSeed: Colors.orange,
          ),
          home: Home(dados: dados)),
    );
  }
}

class Home extends StatelessWidget {
  const Home({super.key, required this.dados});

  final String dados;

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text(context.watch<TextoProvider>().data),
      ),
      body: Column(
        children: [
          WidgetUm(dados: dados),
          WidgetDois(dados: dados),
          WidgetTres(dados: dados),
          TextField(
            onChanged: (value) {
              // Provider.of<TextoProvider>(context, listen: false).alterarTexto(value);

              context.read<TextoProvider>().alterarTexto(value);
            },
          )
        ],
      ),
    );
  }
}

class WidgetUm extends StatelessWidget {
  const WidgetUm({super.key, required this.dados});

  final String dados;

  @override
  Widget build(BuildContext context) {
    // return Text('Widget um: $dados');
    return WidgetDois(dados: dados);
  }
}

class WidgetDois extends StatelessWidget {
  const WidgetDois({super.key, required this.dados});

  final String dados;

  @override
  Widget build(BuildContext context) {
    // return Text('Widget dois: $dados');
    return WidgetTres(dados: dados);
  }
}

class WidgetTres extends StatelessWidget {
  const WidgetTres({super.key, required this.dados});

  final String dados;

  @override
  Widget build(BuildContext context) {
    return Text(
        'Widget três: ${Provider.of<TextoProvider>(context, listen: true).data}');
  }
}

class TextoProvider extends ChangeNotifier {
  String data = 'AAAAAAAAAAAAAAA';

  void alterarTexto(String novo) {
    data = novo;

    notifyListeners();
  }
}
