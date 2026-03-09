 # Exercício 7 — Por que recursão não é uma boa ideia nos casos 5 e 6?

Resposta objetiva:
- São laços de interação com o usuário sem limite superior previsível. Cada tentativa cria uma nova chamada recursiva e consome pilha (stack).
- Em C, não há garantia de otimização de tail call; logo, muitas repetições podem causar estouro de pilha (stack overflow).
- A intenção é puramente iterativa: “repetir enquanto a condição for verdadeira”. `while`/`do-while` expressam isso melhor, com menor custo e mais segurança.
- Manutenção e clareza: versões recursivas podem introduzir efeitos no desempilhamento (ex.: imprimir algo múltiplas vezes se o controle não for cuidadoso). Iterativo evita esse risco.

Use recursão quando:
- Houver estrutura naturalmente recursiva (árvores, divisão-e-conquista) ou profundidade limitada/pequena e conhecida.
- A recursão tornar o código realmente mais claro do que um laço.
