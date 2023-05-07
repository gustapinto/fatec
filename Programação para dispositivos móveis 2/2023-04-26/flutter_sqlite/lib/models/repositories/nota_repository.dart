import 'dart:collection';

import 'package:flutter/foundation.dart';
import 'package:flutter_sqlite/models/db/objectbox_database.dart';
import 'package:flutter_sqlite/models/entities/nota_entity.dart';
import 'package:flutter_sqlite/objectbox.g.dart';

class NotaRepository extends ChangeNotifier {
  late final ObjectBoxDatabase _objectBoxDatabase;
  List<Nota> _notas = [];

  NotaRepository(this._objectBoxDatabase);

  List<Nota> get notas {
    return _notas;
  }

  Future<Box> getBox() async {
    final Store store = await _objectBoxDatabase.getStore();

    return store.box<Nota>();
  }

  Future<void> salvar(Nota nota) async {
    final Box box = await getBox();

    box.put(nota);
    _notas.add(nota);

    notifyListeners();
  }

  Future<void> obterNotas() async {
    final Box box = await getBox();

    _notas = box.getAll() as List<Nota>;

    notifyListeners();
  }
}
