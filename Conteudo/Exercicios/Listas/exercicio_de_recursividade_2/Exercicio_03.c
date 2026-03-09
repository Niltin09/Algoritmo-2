#include <stdio.h>

static int contar_pares_rec(int n) {
    if (n == 0) return 0;
    int v; scanf("%d", &v);
    int add = (v % 2 == 0);
    return add + contar_pares_rec(n - 1);
}

int main(void) {
    int pares = contar_pares_rec(6);
    printf("%d\n", pares);
    return 0;
}
