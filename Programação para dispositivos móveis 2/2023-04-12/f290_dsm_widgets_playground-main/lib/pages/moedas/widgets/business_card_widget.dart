import 'package:flutter/material.dart';
import 'package:faker/src/faker.dart';

class BusinessCard extends StatelessWidget {
  const BusinessCard({
    super.key,
    required this.faker,
    required this.index,
  });

  final Faker faker;
  final int index;

  @override
  Widget build(BuildContext context) {
    return Card(
      child: ListTile(
        leading: CircleAvatar(
          backgroundColor: Colors.yellow.shade600,
          backgroundImage: NetworkImage(faker.image.image(
            random: true,
            keywords: [
              'Person',
              'Profile',
              index.toString(),
            ],
          )),
        ),
        title: Text(faker.person.name()),
        subtitle: Text(faker.company.position()),
      ),
    );
  }
}