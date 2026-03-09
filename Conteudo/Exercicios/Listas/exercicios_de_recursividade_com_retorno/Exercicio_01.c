#include <stdio.h>

int soma_rec(int n) {
    if (n <= 0) return 0;
    return n + soma_rec(n - 1);
}

int main(void) {
    int n;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("%d\n", soma_rec(n));
    return 0;
}
