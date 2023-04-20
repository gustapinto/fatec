import 'package:faker/faker.dart';
import 'package:flutter/material.dart';

class BusinessCard extends StatelessWidget {
  const BusinessCard({
    super.key,
    required this.faker,
  });

  final Faker faker;

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        leading: CircleAvatar(
          backgroundColor: Colors.yellow.shade200,
          backgroundImage: NetworkImage(
            faker.image.image(
              random: true,
              keywords: [
                'person',
              ],
            ),
          ),
        ),
        title: Text(faker.person.name()),
        subtitle: Text(faker.company.position()),
      ),
    );
  }
}
