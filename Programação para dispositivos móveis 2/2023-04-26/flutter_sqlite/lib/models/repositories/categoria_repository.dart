import 'package:flutter/material.dart';
import 'package:flutter_sqlite/models/entities/categoria_entity.dart';
import 'package:flutter_sqlite/objectbox.g.dart';

class CategoriaRepository extends ChangeNotifier {
CategoriaRepository(this._store);

  final Store _store;

  List<Categoria> _categorias = [];
  List<Categoria> get categorias {
    return _categorias;
  }

  Box<Categoria> getBox() {
    return _store.box<Categoria>();
  }

  void salvar(Categoria categoria) {
    getBox().put(categoria);
    _categorias.add(categoria);

    notifyListeners();
  }

  void obterCategorias() {
    _categorias = getBox().getAll();

    notifyListeners();
  }
}