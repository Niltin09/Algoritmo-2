#include <stdio.h>

int max4_rec(int n, int pos) {
    int v;
    int maior_restante;
    printf("Digite o %d numero: ", pos);
    if (scanf("%d", &v) != 1) return v;
    if (n == 1) return v;
    maior_restante = max4_rec(n - 1, pos + 1);
    return (v > maior_restante) ? v : maior_restante;
}

int main(void) {
    int maior = max4_rec(4, 1);
    printf("O maior numero e: %d\n", maior);
    return 0;
}
