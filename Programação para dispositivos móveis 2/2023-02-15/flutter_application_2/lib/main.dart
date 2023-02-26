import 'package:flutter/material.dart';
import 'package:flutter_application_2/components/contact_item.dart';
import 'package:flutter_application_2/components/contact_list.dart';
import 'package:flutter_application_2/utils/scroll_behavior.dart';
import 'components/avatar.dart';

void main() {
  runApp(const MainApp());
}

class MainApp extends StatelessWidget {
  const MainApp({super.key});

  @override
  Widget build(BuildContext context) {
    return MaterialApp(
      scrollBehavior: AppScrollBehavior(),
      home: Scaffold(
        appBar: AppBar(
          title: const Text('Person Profile'),
        ),
        body: Column(
          children: [
            Expanded(
              child: PageView(
                children: [
                  const Avatar(name: 'FOO 3'),
                  Container(
                    color: Colors.purple,
                  ),
                  Container(
                    color: Colors.blue,
                  ),
                ],
              ),
            ),
            const Expanded(
              child: ContactList(
                contacts: [
                  ContactItem(name: 'Foo 1', email: 'foo@bar1.com'),
                  ContactItem(name: 'Foo 2', email: 'foo@bar2.com'),
                  ContactItem(name: 'Foo 3', email: 'foo@bar3.com'),
                  ContactItem(name: 'Foo 4', email: 'foo@bar4.com'),
                  ContactItem(name: 'Foo 5', email: 'foo@bar5.com'),
                ],
              ),
            ),
          ],
        ),
        floatingActionButton: FloatingActionButton(
          child: const Icon(Icons.favorite),
          onPressed: () {
            // ignore: avoid_print
            print('Click');
          },
        ),
      ),
    );
  }
}
