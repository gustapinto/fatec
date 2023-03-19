import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';

class ProfilePage extends StatelessWidget {
  const ProfilePage({super.key});

  final url =
      'https://images.pexels.com/photos/10803285/pexels-photo-10803285.jpeg?auto=compress&cs=tinysrgb&w=1260&h=750&dpr=2';

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text(
          'Person Profile',
        ),
        actions: [
          IconButton(
            onPressed: () {
              showAboutDialog(
                context: context,
                applicationVersion: '1.0.0-b1',
                applicationIcon: const FlutterLogo(),
                applicationLegalese: 'Perfil em Flutter',
                applicationName: 'Person Profile',
              );
            },
            icon: const Icon(
              Icons.question_mark,
            ),
          ),
        ],
      ),
      body: Column(
        children: [
          Expanded(
            flex: 3,
            child: PageView(children: [
              Column(
                children: [
                  SizedBox(
                    width: double.infinity,
                    height: 200,
                    child: Image.network(
                      url,
                      fit: BoxFit.cover,
                    ),
                  ),
                  const Padding(
                    padding: EdgeInsets.only(top: 16.0),
                    child: Text(
                      'Ricieri Silva',
                      style: TextStyle(
                        fontSize: 32,
                        fontWeight: FontWeight.w900,
                      ),
                    ),
                  ),
                  const Divider(
                    height: 20,
                    thickness: 3,
                    indent: 32,
                    endIndent: 32,
                    color: Colors.blueGrey,
                  ),
                  const Padding(
                    padding: EdgeInsets.all(16.0),
                    child: Text(
                      'Lorem ipsum dolor sit amet... Lorem ipsum dolor sit amet... Lorem ipsum dolor sit amet... Lorem ipsum dolor sit amet... Lorem ipsum dolor sit amet... Lorem ipsum dolor sit amet... Lorem ipsum dolor sit amet... ',
                      textAlign: TextAlign.justify,
                    ),
                  ),
                ],
              ),
              Container(
                color: Colors.deepPurple,
              ),
              Container(
                color: Colors.pink,
              ),
            ]),
          ),
          Expanded(
            child: Column(
              children: [
                ListTile(
                  leading: const Icon(FontAwesomeIcons.instagram),
                  title: const Text('Ricieri Silva'),
                  subtitle: const Text('ricieri@gmail.com'),
                  onTap: () {},
                ),
              ],
            ),
          ),
        ],
      ),
      floatingActionButton: FloatingActionButton(
        onPressed: () {},
        child: const FaIcon(FontAwesomeIcons.linkedinIn),
      ),
    );
  }
}
