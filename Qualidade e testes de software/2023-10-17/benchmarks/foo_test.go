package foo

import (
	"testing"
)

func GetFoo() string {
	return "foo"
}

func BenchmarkFoo(b *testing.B) {
	for i := 0; i <= b.N; i++ {
		GetFoo()
	}
}
