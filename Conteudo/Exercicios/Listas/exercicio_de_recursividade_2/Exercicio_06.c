#include <stdio.h>

static int conta_intervalo_rec(int n) {
    if (n == 0) return 0;
    int v; scanf("%d", &v);
    int add = (v >= 5 && v <= 8) ? 1 : 0;
    return add + conta_intervalo_rec(n - 1);
}

int main(void) {
    int qt = conta_intervalo_rec(6);
    printf("%d\n", qt);
    return 0;
}
