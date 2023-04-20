import 'package:flutter/material.dart';

class BmiCard extends StatelessWidget {
  const BmiCard(
      {super.key,
      required this.icon,
      required this.descricao,
      this.width,
      this.height});
  final IconData icon;
  final String descricao;
  final double? width, height;
  @override
  Widget build(BuildContext context) {
    return Expanded(
      child: Card(
        elevation: 8,
        child: SizedBox(
          width: width,
          height: height,
          child: Column(
            mainAxisAlignment: MainAxisAlignment.center,
            children: [
              Icon(
                icon,
                size: 100,
                color: Theme.of(context).colorScheme.onPrimaryContainer,
              ),
              Text(
                descricao,
                style: TextStyle(
                  fontSize: 32,
                  color: Theme.of(context).colorScheme.onPrimaryContainer,
                ),
              ),
            ],
          ),
        ),
      ),
    );
  }
}
