import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:objectbox/objectbox.dart';

@Entity()
class Categoria {
  @Id()
  int id = 0;

  String descricao = '';

  final ToOne<Nota> nota = ToOne<Nota>();

  Categoria({
    required this.descricao,
  });

  @override
  String toString() {
    return 'Categoria(id: $id, descricao: $descricao, nota: $nota)';
  }
}
