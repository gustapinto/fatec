import 'package:faker/faker.dart';
import 'package:flutter/material.dart';

class SecondPage extends StatelessWidget {
  final Faker faker = Faker();

  SecondPage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Second'),
      ),
      body: ListView.separated(
        itemBuilder: (context, index) {
          return Column(
            children: [
              ListTile(
                leading: CircleAvatar(
                  backgroundColor: Colors.primaries[index],
                ),
                title: Text(faker.person.name()),
                subtitle: Text(
                  faker.date
                      .dateTime(minYear: 1019, maxYear: 2023)
                      .toIso8601String(),
                ),
              ),
              Padding(
                padding: const EdgeInsets.symmetric(
                  vertical: 0,
                  horizontal: 16,
                ),
                child: Text(faker.lorem.sentence()),
              ),
              Container(
                padding: const EdgeInsets.symmetric(
                  vertical: 0,
                  horizontal: 16,
                ),
                child: Image.network(
                  faker.image.image(
                    width: 600,
                    keywords: [
                      'nature',
                      'forest',
                      index.toString(),
                    ],
                  ),
                ),
              ),
            ],
          );
        },
        separatorBuilder: (context, index) {
          return const Divider(
            height: 5,
            thickness: 10,
          );
        },
        itemCount: 100,
      ),
    );
  }
}
