// Arquivo foo.go
package foo

type Getter interface {
	Get() string
}

func GetFoo(g Getter) string {
	return g.Get()
}
