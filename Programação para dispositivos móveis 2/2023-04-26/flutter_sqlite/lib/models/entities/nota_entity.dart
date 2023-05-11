import 'package:flutter_sqlite/models/entities/categoria_entity.dart';
import 'package:objectbox/objectbox.dart';

@Entity()
class Nota {
  @Id()
  int id = 0;
  String titulo;
  String descricao;

  @Backlink()
  final ToMany<Categoria> categorias = ToMany<Categoria>();

  Nota({
    required this.titulo,
    required this.descricao,
  });

  @override
  String toString() {
    return 'Nota(id: $id, titulo: $titulo, descricao: $descricao)';
  }
}