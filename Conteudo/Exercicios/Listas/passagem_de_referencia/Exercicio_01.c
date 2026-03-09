#include <stdio.h>

// Determina se n e par. Em vez de retornar, escreve 1 (par) ou 0 (impar) em *is_par
void eh_par(int n, int *is_par) {
    if (is_par) {
        *is_par = (n % 2 == 0);
    }
}

int main(void) {
    int n, isPar = 0;
    printf("Digite um numero inteiro: ");
    if (scanf("%d", &n) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    eh_par(n, &isPar);

    if (isPar) {
        printf("O numero %d e par.\n", n);
    } else {
        printf("O numero %d e impar.\n", n);
    }

    return 0;
}
