#include <stdio.h>

int min4_rec(int n, int pos) {
    int v;
    int menor_restante;
    printf("Digite o %d numero: ", pos);
    if (scanf("%d", &v) != 1) return v;
    if (n == 1) return v;
    menor_restante = min4_rec(n - 1, pos + 1);
    return (v < menor_restante) ? v : menor_restante;
}

int main(void) {
    int menor = min4_rec(4, 1);
    printf("O menor numero e: %d\n", menor);
    return 0;
}
