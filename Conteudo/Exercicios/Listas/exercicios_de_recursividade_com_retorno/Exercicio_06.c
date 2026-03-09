#include <stdio.h>

static int qnt3_8(int n) {
    if (n == 0) return 0;
    int v; 
    printf("Digite o %d numero: ", 6 - n);
    scanf("%d", &v);
    int add = (v >= 3 && v <= 8) ? 1 : 0;
    return add + qnt3_8(n - 1);
}

int main(void) {
    int total = qnt3_8(5);
    printf("%d dos 5 numeros estao entre 3 e 8\n", total);
    return 0;
}
