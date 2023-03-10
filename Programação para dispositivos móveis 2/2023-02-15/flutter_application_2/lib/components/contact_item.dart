import 'package:flutter/material.dart';

class ContactItem extends StatelessWidget {
  const ContactItem({
    required this.name,
    required this.email,
    this.icon = Icons.email,
    super.key,
  });

  final String name;
  final String email;
  final IconData icon;

  @override
  Widget build(BuildContext context) {
    return Align(
      alignment: Alignment.center,
      child: FractionallySizedBox(
        widthFactor: 0.5,
        child: ListTile(
          leading: Icon(icon),
          title: Text(name),
          subtitle: Text(email),
        ),
      ),
    );
  }
}
