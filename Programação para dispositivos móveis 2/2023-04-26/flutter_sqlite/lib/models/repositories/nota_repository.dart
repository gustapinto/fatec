import 'package:flutter/foundation.dart';
import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:flutter_sqlite/objectbox.g.dart';

class NotaRepository extends ChangeNotifier {
  NotaRepository(this._store);

  final Store _store;

  List<Nota> _notas = [];
  List<Nota> get notas {
    return _notas;
  }

  Box<Nota> getBox() {
    return _store.box<Nota>();
  }

  void salvar(Nota nota) {
    final Box box = getBox();

    box.put(nota);
    _notas.add(nota);

    notifyListeners();
  }

  void obterNotas() {
    final Box box = getBox();

    _notas = box.getAll() as List<Nota>;

    notifyListeners();
  }
}
