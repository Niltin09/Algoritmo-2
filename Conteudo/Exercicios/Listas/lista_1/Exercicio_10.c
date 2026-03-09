inteiro ler() 
    inteiro a 
    escreva(“Digite um valor:”) 
    leia(a) 
    retornar a 
fim 

inteiro fat(inteiro val) 
    inteiro i, res 
    res <- 1 
    para(i <- 2; i <= val; i++)faça 
    res <- res * i 
    fimpara   
    retornar res 
fim

nada apresentar(inteiro res) 
    escreva(“Resultado:” , res) 
fim

início 
    inteiro val, res  
    val <- ler() 
    res <- fat(val) 
    apresentar(res) 
fim

//O algoritmo acima le um valor inteiro, calcula o fatorial desse valor e apresenta o resultado.