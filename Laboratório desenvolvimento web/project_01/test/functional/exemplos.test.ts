// Cria um cenário (suit) de testes unitários usando Jest
describe('Valida comportamento de uma função', (): void => {
    class Operations {
        soma = (a: number, b: number): number => a + b
        sub = (a: number, b: number): number => a - b
        mult = (a: number, b: number): number => a * b
        div = (a: number, b: number): number => a / b
    }

    // Declara as funções que serão testadas

    // Declara uma operação de teste
    it('Soma de a + b', (): void => {
        const ops = new Operations()

        // Espera que um resultado seja um valor
        expect(ops.soma(10, 10)).toBe(20)
    })

    it('Subtração de a - b', (): void => {
        const ops = new Operations()

        expect(ops.sub(10, 10)).toBe(0)
    })

    it('Multiplicação de a * b', (): void => {
        const ops = new Operations()

        expect(ops.mult(10, 10)).toBe(100)
    })

    it('Divisão de a / b', (): void => {
        const ops = new Operations()

        expect(ops.div(10, 10)).toBe(1)
    })
})
