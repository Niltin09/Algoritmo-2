# Exercício de Recursividade 3

Este documento contém as respostas com a saída esperada e o desenho da execução (pilha de chamadas) para cada item.

> Observação: onde aparece `printf(n)` é pseudocódigo; em C seria `printf("%d", n)`.

---

## 1) Pré-ordem (chama com n = 4)

func(int n){
    if (n == 0) printf("fim");
    else { printf(n); func(n-1); }
}

- Saída: `4 3 2 1 fim`

Desenho:

func(4)
  print 4
  func(3)
    print 3
    func(2)
      print 2
      func(1)
        print 1
        func(0)
          print fim

---

## 2) Pós-ordem (chama com n = 4)

func(int n){
    if (n == 0) printf("fim");
    else { func(n-1); printf(n); }
}

- Saída: `fim 1 2 3 4`

Desenho:

func(4)
  func(3)
    func(2)
      func(1)
        func(0)
          print fim
        print 1
      print 2
    print 3
  print 4

---

## 3) Pré e pós (chama com n = 4)

func(int n){
    if (n == 0) printf("fim");
    else {
        printf(n);
        func(n-1);
        printf(n);
    }
}

- Saída: `4 3 2 1 fim 1 2 3 4`

Desenho (trecho final):

... func(0) -> fim
sobe imprimindo: 1, 2, 3, 4

---

## 4) Infixa com duas chamadas (chama com n = 3)

c
func(int n){
    if (n == 0) printf("fim");
    else {
        func(n-1);
        printf(n);
        func(n-1);
    }
}

- Saída: `fim 1 fim 2 fim 1 fim 3 fim 1 fim 2 fim 1 fim`

Esboço:

func(3)
  func(2) -> fim 1 fim 2 fim 1 fim
  print 3
  func(2) -> fim 1 fim 2 fim 1 fim
e
---

## 5) Pré-ordem com duas chamadas (chama com n = 3)

c
func(int n){
    if (n == 0) printf("fim");
    else {
        printf(n);
        func(n-1);
        func(n-1);
    }
}

- Saída: `3 2 1 fim fim 1 fim fim 2 1 fim fim 1 fim fim`

Esboço:

func(3)
  print 3
  func(2) -> 2 1 fim fim 1 fim fim
  func(2) -> 2 1 fim fim 1 fim fim

---

## 6) Pós-ordem com duas chamadas (chama com n = 3)

```c
func(int n){
    if (n == 0) printf("fim");
    else {
        func(n-1);
        func(n-1);
        printf(n);
    }
}
```

- Saída: `fim fim 1 fim fim 1 2 fim fim 1 fim fim 1 2 3`

Esboço:
func(3)
  func(2) -> fim fim 1 fim fim 1 2
  func(2) -> fim fim 1 fim fim 1 2
  print 3

---

## 7) Euclides (fazAlgo)

int fazAlgo(int x, int y){
    if (y == 0) return x;
    else return fazAlgo(y, x % y);
}

- Entrada: 12 e 18
  - Traço:
    - fazAlgo(12,18)
    - -> fazAlgo(18, 12%18=12)
    - -> fazAlgo(12, 18%12=6)
    - -> fazAlgo(6, 12%6=0)
    - retorna 6
  - Resultado: 6

- Entrada: 6 e 9
  - Traço:
    - fazAlgo(6,9)
    - -> fazAlgo(9, 6%9=6)
    - -> fazAlgo(6, 9%6=3)
    - -> fazAlgo(3, 6%3=0)
    - retorna 3
  - Resultado: 3

O que calcula?
-O MDC (máximo divisor comum) de x e y, pelo algoritmo de Euclides.
