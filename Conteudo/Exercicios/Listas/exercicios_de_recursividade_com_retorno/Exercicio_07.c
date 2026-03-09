#include <stdio.h>

static int conta_pares_rec(int n) {
    if (n == 0) return 0;
    int v; 
    printf("Digite o %d numero: ", 6 - n);
    scanf("%d", &v);
    int add = (v % 2 == 0) ? 1 : 0;
    return add + conta_pares_rec(n - 1);
}

int main(void) {
    int total = conta_pares_rec(5);
    printf("%d dos 5 numeros digitados sao pares.\n", total);
    return 0;
}
