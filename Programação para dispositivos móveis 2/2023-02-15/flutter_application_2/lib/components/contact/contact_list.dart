import 'package:flutter/material.dart';
import 'package:flutter_application_2/components/contact/contact_item.dart';

class ContactList extends StatelessWidget {
  const ContactList({required this.contacts, super.key});

  final List<ContactItem> contacts;

  @override
  Widget build(BuildContext context) {
    return Column(
      children: [
        const Text(
          'Contacts',
          style: TextStyle(
            fontWeight: FontWeight.bold,
            fontSize: 24,
          ),
        ),
        Expanded(
          child: ListView(
            children: contacts,
          ),
        ),
      ],
    );
  }
}
