import 'package:flutter/material.dart';
import 'package:flutter_application_2/components/contact/contact_item.dart';
import 'package:flutter_application_2/components/contact/contact_list.dart';
import 'package:flutter_application_2/utils/scroll_behavior.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:flutter_application_2/components/avatar/avatar.dart';

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
                  const Avatar(
                    name: 'Gustavo Henrique Pinto',
                    description:
                        'Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec eget rutrum sapien. Aliquam imperdiet eu justo nec tincidunt. Donec elementum volutpat aliquet.',
                    imageUrl:
                        'https://redestecnologia.com.br/wp-content/uploads/2017/01/sla_mockup.png',
                  ),
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
                  ContactItem(
                    name: 'Foo 1',
                    email: 'foo@bar1.com',
                    icon: FontAwesomeIcons.instagram,
                  ),
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
          child: const Icon(FontAwesomeIcons.linkedinIn),
          onPressed: () {
            // ignore: avoid_print
            print('Click');
          },
        ),
      ),
    );
  }
}
