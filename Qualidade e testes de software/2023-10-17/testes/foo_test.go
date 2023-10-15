package foo

import (
	"testing"
)

func GetFoo() string {
	if false {
		return "bar"
	}

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

func BenchmarkFoo(b *testing.B) {
	for i := 0; i <= b.N; i++ {
		GetFoo()
	}
}
