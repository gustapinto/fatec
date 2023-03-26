mixin DBA {
  void criarSchema(String schema) {
    print("Criando schema $schema");
  }

  void criarTrigger(String trigger) {
    print("Criando trigger $trigger");
  }
}