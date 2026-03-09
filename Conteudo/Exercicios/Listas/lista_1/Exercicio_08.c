inteiro ler()
    inteiro a
    escreva("Digite um valor:")
    leia(a)
    retornar a
fim

inteiro dobro(inteiro val)
    inteiro res
    res <- val * 2
    retornar res
fim

nada apresentar(inteiro res) // Deveria ter feito o uso de "procedimento" ao invés de "nada"
    escreva("Dobro: ", res) 
fim

inicio
    inteiro val, res
    val <- ler()
    res <- dobro(val)
    apresentar(res)
fim