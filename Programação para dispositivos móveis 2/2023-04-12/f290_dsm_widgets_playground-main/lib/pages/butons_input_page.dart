import 'package:flutter/material.dart';

class ButtonsInputPage extends StatefulWidget {
  const ButtonsInputPage({super.key});

  @override
  State<ButtonsInputPage> createState() => _ButtonsInputPageState();
}

class _ButtonsInputPageState extends State<ButtonsInputPage> {
  var _switchState = true;
  var _sliderValue = 5.0;
  static var _items = ['Java', 'Dart', 'Kotlin', 'GO', 'Java Script'];
  String _selectLang = _items[1];

  @override
  Widget build(BuildContext context) {
    return Center(
      child: Column(
        crossAxisAlignment: CrossAxisAlignment.center,
        mainAxisAlignment: MainAxisAlignment.spaceAround,
        children: [
          ElevatedButton(onPressed: () {}, child: const Text('ElevatedButton')),
          ElevatedButton.icon(
            onPressed: () {},
            label: const Text('ElevatedButtonIcon'),
            icon: const Icon(
              Icons.settings,
            ),
          ),
          OutlinedButton(onPressed: () {}, child: const Text('OutlinedButton')),
          TextButton(onPressed: () {}, child: const Text('TextButton')),
          TextButton.icon(
            onPressed: () {},
            label: const Text('TextButtonIcon'),
            icon: const Icon(
              Icons.settings,
            ),
          ),
          FilledButton(onPressed: () {}, child: const Text('FilledButton')),
          Switch(
            value: _switchState,
            onChanged: (value) {
              setState(() {
                _switchState = value;
              });
            },
          ),
          Slider(
            label: 'Slider',
            min: 1,
            max: 10,
            value: _sliderValue,
            onChanged: (value) {
              setState(() {
                _sliderValue = value;
              });
            },
          ),
          DropdownButton(
            value: _selectLang,
            items: _items
                .map(
                  (ddmi) => DropdownMenuItem(
                    value: ddmi,
                    child: Text(ddmi),
                  ),
                )
                .toList(),
            onChanged: (value) {
              setState(() {
                _selectLang = value!;
              });
            },
          )
        ],
      ),
    );
  }
}
