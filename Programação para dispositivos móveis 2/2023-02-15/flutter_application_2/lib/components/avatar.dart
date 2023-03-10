import 'package:flutter/material.dart';

class Avatar extends StatelessWidget {
  const Avatar(
      {required this.name,
      required this.description,
      required this.imageUrl,
      super.key});

  final String name;
  final String description;
  final String imageUrl;

  @override
  Widget build(BuildContext context) {
    const titleTextStyle = TextStyle(fontSize: 30, fontWeight: FontWeight.bold);

    return Align(
      alignment: Alignment.center,
      child: Column(
        children: [
          Container(
            margin: const EdgeInsets.only(top: 40),
            child: CircleAvatar(
              radius: 100,
              child: ClipOval(
                // borderRadius: BorderRadius.circular(8.0),
                child: Image.network(
                  imageUrl,
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
              children: [
                Text(
                  name,
                  style: titleTextStyle,
                ),
                Padding(
                  padding: const EdgeInsets.all(20),
                  child: Text(
                    description,
                    textAlign: TextAlign.center,
                  ),
                ),
              ],
            ),
          ),
        ],
      ),
    );
  }
}
