import 'package:flutter/material.dart';

class AvatarDescription extends StatelessWidget {
  const AvatarDescription(this.name, this.description, {super.key});

  final String name;
  final String description;

  @override
  Widget build(BuildContext context) {
    const titleTextStyle = TextStyle(fontSize: 30, fontWeight: FontWeight.bold);

    return Container(
      margin: const EdgeInsets.only(top: 20),
      child: Column(
        children: [
          Text(
            name,
            style: titleTextStyle,
          ),
          Padding(
            padding: const EdgeInsets.all(20),
            child: Text(
              description,
              textAlign: TextAlign.center,
            ),
          ),
        ],
      ),
    );
  }
}