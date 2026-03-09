#include <stdio.h>

static int maior_restante(int n, int maior_atual) {
    if (n == 0) return maior_atual;
    int v; scanf("%d", &v);
    if (v > maior_atual) maior_atual = v;
    return maior_restante(n - 1, maior_atual);
}

int main(void) {
    int v;
    scanf("%d", &v);                 // le o primeiro
    int maior = maior_restante(7, v);  // faltam 7 valores (total 8)
    printf("%d\n", maior);
    return 0;
}
