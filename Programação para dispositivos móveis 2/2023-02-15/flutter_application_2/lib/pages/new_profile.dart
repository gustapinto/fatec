import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:url_launcher/url_launcher_string.dart';

class NewProfilePage extends StatelessWidget {
  const NewProfilePage({super.key});

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('New Profile'),
        centerTitle: false,
        actions: [
          IconButton(
            onPressed: () {
              showAboutDialog(
                context: context,
                applicationVersion: '1.0.0-b1',
                applicationIcon: const FlutterLogo(),
                applicationLegalese: 'Meu primeiro app Flutter',
                applicationName: 'Person Profile',
              );
            },
            icon: const Icon(
              Icons.question_mark,
            ),
          ),
        ],
      ),
      body: Stack(
        children: [
          PageView(
            children: [
              Center(
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    FilledButton(
                      onPressed: () {},
                      child: const Text('Filled Button'),
                    ),
                  ],
                ),
              ),
              Container(
                color: Colors.orange,
              ),
              Container(
                color: Colors.yellow,
              ),
            ],
          ),
          Align(
            alignment: Alignment.bottomCenter,
            child: Card(
              margin: const EdgeInsets.all(32),
              child: Column(
                mainAxisSize: MainAxisSize.min,
                children: [
                  ListTile(
                    leading: const FaIcon(FontAwesomeIcons.github),
                    title: const Text('Github'),
                    onTap: () {
                      openUrl('https://www.github.com');
                    },
                  ),
                  ListTile(
                    leading: const FaIcon(FontAwesomeIcons.linkedin),
                    title: const Text('Linkedin'),
                    onTap: () {
                      openUrl('https://www.linkedin.com');
                    },
                  ),
                  ListTile(
                    leading: const FaIcon(FontAwesomeIcons.instagram),
                    title: const Text('Instagram'),
                    onTap: () {
                      openUrl('https://instagram.com');
                    },
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
    );
  }

  Future<void> openUrl(String url) async {
    if (!await launchUrlString(url, mode: LaunchMode.inAppWebView)) {
      throw Exception('Não foi possível abrir a url: $url');
    }
  }
}
