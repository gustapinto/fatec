import 'package:flutter/material.dart';

class ContactItem extends StatelessWidget {
  const ContactItem({required this.name, required this.email, super.key});

  final String name;
  final String email;

  @override
  Widget build(BuildContext context) {
    return Align(
      alignment: Alignment.center,
      child: FractionallySizedBox(
        widthFactor: 0.5,
        child: ListTile(
          leading: const Icon(Icons.email),
          title: Text(name),
          subtitle: Text(email),
        ),
      ),
    );
  }
}
