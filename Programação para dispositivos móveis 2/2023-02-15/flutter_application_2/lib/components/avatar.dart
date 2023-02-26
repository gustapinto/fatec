import 'package:flutter/material.dart';

class Avatar extends StatelessWidget {
  const Avatar({required this.name, super.key});

  final String name;

  @override
  Widget build(BuildContext context) {
    const titleTextStyle = TextStyle(fontSize: 30, fontWeight: FontWeight.bold);

    return Align(
      alignment: Alignment.center,
      child: Column(
        children: [
          Container(
            margin: const EdgeInsets.only(top: 40),
            child: CircleAvatar(
              radius: 100,
              child: Text(
                name,
                style: titleTextStyle,
              ),
            ),
          ),
          Container(
            margin: const EdgeInsets.only(top: 20),
            child: Text(
              name,
              style: titleTextStyle,
            ),
          ),
        ],
      ),
    );
  }
}
