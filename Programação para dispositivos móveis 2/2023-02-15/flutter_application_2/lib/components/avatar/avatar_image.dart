import 'package:flutter/material.dart';

class AvatarImage extends StatelessWidget {
  const AvatarImage(this.imageUrl, {super.key});

  final String imageUrl;

  @override
  Widget build(BuildContext context) {
    return Container(
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
    );
  }
}