import 'package:flutter/material.dart';
import 'package:font_awesome_flutter/font_awesome_flutter.dart';
import 'package:url_launcher/url_launcher_string.dart';

class NeoProfilePage extends StatelessWidget {
  const NeoProfilePage({super.key});

  @override
  Widget build(BuildContext context) {
    const avatarUrl = 'https://avatars.githubusercontent.com/u/51335343?v=4';

    return Scaffold(
      appBar: AppBar(
        title: const Text('Neo Profile'),
        centerTitle: false,
        actions: [
          IconButton(
            onPressed: () {
              showAboutDialog(
                  context: context,
                  applicationVersion: '1.0.0-b1',
                  applicationIcon: const FlutterLogo(),
                  applicationLegalese: 'Meu primeiro App Flutter.',
                  applicationName: 'iProfile');
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
              Column(
                mainAxisSize: MainAxisSize.min,
                children: [
                  Align(
                    alignment: Alignment.center,
                    child: Column(
                      children: [
                        Container(
                          margin: const EdgeInsets.only(top: 40),
                          child: CircleAvatar(
                            radius: 100,
                            child: ClipOval(
                              child: Image.network(
                                avatarUrl,
                                fit: BoxFit.cover,
                                width: 200,
                                height: 200,
                              ),
                            ),
                          ),
                        ),
                        Container(
                          margin: const EdgeInsets.only(top: 20),
                          child: Column(
                            children: const [
                              Text(
                                "Gustavo",
                                style: TextStyle(
                                  fontSize: 30,
                                  fontWeight: FontWeight.bold,
                                ),
                              ),
                              Padding(
                                padding: EdgeInsets.all(20),
                                child: Text(
                                  "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Vivamus pellentesque ornare augue nec posuere. Pellentesque volutpat magna eget quam rhoncus, sit amet mattis nunc convallis. Praesent et leo nec enim iaculis volutpat.",
                                  textAlign: TextAlign.center,
                                ),
                              ),
                            ],
                          ),
                        ),
                      ],
                    ),
                  ),
                ],
              ),
              Center(
                child: Column(
                  mainAxisSize: MainAxisSize.min,
                  children: [
                    FilledButton(
                      onPressed: () {},
                      child: const Text('FilledButton'),
                    ),
                  ],
                ),
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
                    leading: const FaIcon(FontAwesomeIcons.linkedinIn),
                    title: const Text('linkedin.com/gustapinto'),
                    onTap: () {
                      abrirUrl('https://www.linkedin.com/in/gustapinto');
                    },
                  ),
                  ListTile(
                    leading: const FaIcon(FontAwesomeIcons.instagram),
                    title: const Text('instagram.com/gustapinto_'),
                    onTap: () {
                      abrirUrl('https://instagram.com/gustapinto_');
                    },
                  ),
                  ListTile(
                    leading: const FaIcon(FontAwesomeIcons.github),
                    title: const Text('github.com/gustapinto'),
                    onTap: () {
                      abrirUrl('https://github.com/gustapinto');
                    },
                  ),
                ],
              ),
            ),
          ),
        ],
      ),
      floatingActionButton: FloatingActionButton(
        child: const FaIcon(FontAwesomeIcons.globe),
        onPressed: () {
          abrirUrl('https://gustapinto.dev');
        },
      ),
    );
  }

  Future<void> abrirUrl(String url) async {
    if (!await launchUrlString(url, mode: LaunchMode.inAppWebView)) {
      throw Exception('Não foi possível abrir a url: $url');
    }
  }
}
