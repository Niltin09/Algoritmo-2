#include <stdio.h>

int soma4_rec(int n, int pos) {
    if (n == 0) return 0;
    int v;
    printf("Digite o %d numero: ", pos);
    if (scanf("%d", &v) != 1) return 0;
    int resto = soma4_rec(n - 1, pos + 1);
    return v + resto;
}

int main(void) {
    int soma = soma4_rec(4, 1);
    float media = soma / 4.0f;
    printf("Soma= %d Media= %.2f\n", soma, media);
    return 0;
}
