# Go testing
 
# +

# Go mock

---

## Go testing

- É a biblioteca de testes da linguagem Go
- Permite o desenvolvimento de  **testes unitários** e ***benchmarks***

---
### Escrevendo testes

1. Os testes são funções que:
	1. Devem começar com `Test...`
	2. Não devem ter retorno
	3. Devem receber um parâmetro do tipo  `*testing.T`
-  Os arquivos com testes devem terminar com `..._test.go`

---

```go
// Arquivo foo_test.go
package foo

import (
	"testing"
)

// Função que será testada
func GetFoo() string {
	return "foo"
}

// Teste que intencionalmente falhará
func TestGetFooEqualsBar(t *testing.T) {
	actual := GetFoo()
	expected := "bar"

	// Em Go testamos por casos não esperados ou por erros ao
	// invés de casos corretos
	if actual != expected {
		t.Errorf("Fail, expected %s, got %s", expected, actual)
	}
}

// Teste que passará
func TestGetFooEqualsFoo(t *testing.T) {
	actual := GetFoo()
	expected := "foo"

	if actual != expected {
		t.Errorf("Fail, expected %s, got %s", expected, actual)
	}
}
```

---

### Executando os testes

![[Pasted image 20231015131651.png]]

---

### Escrevendo Benchmarks

- Os benchmarks são funções que:
	1. Devem começar com `Benchmark...`
	2. Não devem ter retorno
	3. Devem receber um parâmetro do tipo  `*testing.B`
- Os arquivos com *benchmarks* devem terminar com `..._test.go`

---


```go
// Arquivo foo_test.go
package foo

import (
	"testing"
)

// Função que será testada
func GetFoo() string {
	return "foo"
}

func BenchmarkFoo(b *testing.B) {
	// b.N é um valor calculado automaticamente pela biblioteca que garante
	// que todos os benchmarks executem com a mesma carga
	for i := 0; i <= b.N; i++ {
		GetFoo()
	} 
}
```


---

### Executando os *Benchmarks*

![[Pasted image 20231015133041.png]]

---

## Go Mock

- É uma biblioteca para a geração automática de *mocks*
- Complementa a biblioteca **Go Testing**, fornecendo construtores e opções mais avançadas

---

### Escrevendo mocks

- As *mocks* são geradas automaticamente a partir de `interfaces` Go
- Seu código é compilado e gerado pela ferramenta `mockgen`

---

```go
// Arquivo foo.go
package foo

type Getter interface {
	Get() string
}

func GetFoo(g Getter) string {
	return g.Get()
}
```

---

### Gerando os mocks

![[Pasted image 20231015135427.png]]

---

```go
// Arquivo foo_test.go
package foo

import (
	mock_foo "mocks/mocks"
	"testing"

	"go.uber.org/mock/gomock"
)

func TestGetFoo(t *testing.T) {
	expected := "foo"

	// Instancia controller
	ctrl := gomock.NewController(t)

	// Instancia o mock
	getterMock := mock_foo.NewMockGetter(ctrl)

	// Controla como o mock deve se comportar
	getterMock.
		EXPECT().
		Get().
		Return(expected)

	actual := GetFoo(getterMock)

	if actual != expected {
		t.Errorf("Fail, expected %s, got %s", expected, actual)
	}
}
```

---
### Executando os testes com *mocks*

![[Pasted image 20231015140123.png]]

---

# Obrigado pela atenção!

Trabalho desenvolvido na disciplina de **Qualidade e Testes de Software** por Gustavo Henrique Pinto, 6º DSM, FATEC Araras

---

## Bibliografia

- https://pkg.go.dev/testing
- https://github.com/uber-go/mock
- https://blog.logrocket.com/benchmarking-golang-improve-function-performance/#:~:text=Running%20a%20benchmark%20in%20Go,subset%20of%20your%20benchmark%20functions.
- https://stackoverflow.com/questions/16161142/how-to-test-only-one-benchmark-function
