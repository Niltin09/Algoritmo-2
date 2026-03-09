#include <stdio.h>

static int menor_restante(int n, int menor_atual) {
    if (n == 0) return menor_atual;
    int v; scanf("%d", &v);
    if (v < menor_atual) menor_atual = v;
    return menor_restante(n - 1, menor_atual);
}

int main(void) {
    int v;
    scanf("%d", &v);                 // le o primeiro
    int menor = menor_restante(7, v);  // faltam 7 valores (total 8)
    printf("%d\n", menor);
    return 0;
}
