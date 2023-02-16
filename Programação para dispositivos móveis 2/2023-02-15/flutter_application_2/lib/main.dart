import 'dart:ui';

import 'package:flutter/material.dart';

void main() {
  runApp(const MainApp());
}

class AppScrollBehavior extends MaterialScrollBehavior {
  @override
  Set<PointerDeviceKind> get dragDevices => {
    PointerDeviceKind.touch,
    PointerDeviceKind.mouse,
  };
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
              flex: 3,
              child: Container(
                child: PageView(
                  children: [
                    Container(
                      color: Colors.red,
                      child: Column(
                        children: [
                          Container(
                            padding: 400,
                            child: const Align(
                              alignment: Alignment.center,
                              child: CircleAvatar(
                                radius: 100,
                                child: Text('FOO',
                                  style: TextStyle(
                                    fontSize: 70,
                                    fontWeight: FontWeight.bold
                                  ),
                                ),
                              ),
                            ),
                          ),
                        ],
                      ),
                    ),
                    Container(
                      color: Colors.purple,
                    ),
                    Container(
                      color: Colors.blue,
                    )
                  ],
                )
              ),
            ),
            Expanded(
              child: Column(
                children: const [
                  ListTile(
                    leading: Icon(Icons.email),
                    title: Text('Foobar'),
                    subtitle: Text('foobar@email.com'),
                  ),
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
