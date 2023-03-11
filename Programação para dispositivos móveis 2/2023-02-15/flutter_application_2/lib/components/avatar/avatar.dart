import 'package:flutter/material.dart';
import 'package:flutter_application_2/components/avatar/avatar_description.dart';
import 'package:flutter_application_2/components/avatar/avatar_image.dart';

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
    return Align(
      alignment: Alignment.center,
      child: Column(
        children: [
          AvatarImage(imageUrl),
          AvatarDescription(name, description)
        ],
      ),
    );
  }
}
