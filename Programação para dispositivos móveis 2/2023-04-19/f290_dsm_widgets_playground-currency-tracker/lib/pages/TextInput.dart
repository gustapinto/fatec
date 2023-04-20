import 'package:flutter/material.dart';

class TextInputPage extends StatelessWidget {
  const TextInputPage({super.key});

  static final _controllerEmail = TextEditingController();
  static final _controllerTelefone = TextEditingController();

  @override
  Widget build(BuildContext context) {
    return Column(
      mainAxisAlignment: MainAxisAlignment.center,
      children: [
        Padding(
          padding: const EdgeInsets.all(16.0),
          child: TextField(
            controller: _controllerEmail,
            textInputAction: TextInputAction.done,
            keyboardType: TextInputType.emailAddress,
            decoration: InputDecoration(
              helperText: 'Seu e-mail pessoal',
              label: const Text('E-mail'),
              filled: true,
              enabledBorder: const UnderlineInputBorder(
                borderSide: BorderSide(color: Colors.red),
              ),
              focusedBorder: OutlineInputBorder(
                borderSide: const BorderSide(color: Colors.deepOrange),
                borderRadius: BorderRadius.circular(32),
              ),
            ),
            onChanged: (text) => print('onChanged: $text'),
            onSubmitted: (text) => print('onSubmitted: $text'),
            onEditingComplete: () =>
                print('onEditingComplete: Finalizou a edição.'),
          ),
        ),
      ],
    );
  }
}
