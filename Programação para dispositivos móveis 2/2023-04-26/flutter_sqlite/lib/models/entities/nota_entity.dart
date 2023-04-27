import 'package:objectbox/objectbox.dart';

@Entity()
class Nota {
  @Id()
  int id = 0;
  String titulo;
  String descricao;

  Nota({
    required this.titulo,
    required this.descricao,
  });

  @override
  String toString() {
    return 'Nota(id: $id, titulo: $titulo, descricao: $descricao)';
  }
}