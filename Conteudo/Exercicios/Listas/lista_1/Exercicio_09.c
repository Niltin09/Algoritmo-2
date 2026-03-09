real ler() 
    real a 
    escreva("Digite seu peso:") 
    leia(a) 
    retornar a 
fim 
    
real calcularPesoEmMarte(real pesoTerra) 
    real pesoMarte 
    pesoMarte <- pesoTerra / 9.81 * 3.711 
    retornar pesoMarte 
fim 

nada apresentar(real pesoMarte) // Deveria ter feito o uso de "procedimento" ao invés de "nada"
    escreva(“Em Marte, você pesaria:” , pesoMarte) 
fim 

início 
    real pesoTerra, pesoMarte  
    ler() //Nao atribuiu o retorno da função ler() a pesoTerra 
    calcularPesoEmMarte(pesoTerra) // Nao atribuiu o retorno da função calcularPesoEmMarte() a pesoMarte
    apresentar(pesoMarte) 
fim 