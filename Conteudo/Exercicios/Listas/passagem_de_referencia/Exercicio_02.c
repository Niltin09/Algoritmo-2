#include <stdio.h>

// Compara a e b e escreve o maior em *maior
void maior_de_dois(double a, double b, double *maior) {
    if (maior) {
        *maior = (a >= b ? a : b);
    }
}

int main(void) {
    double a, b, m = 0.0;
    printf("Digite dois numeros: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Entrada invalida.\n");
        return 1;
    }

    maior_de_dois(a, b, &m);
    printf("Maior: %.6g\n", m);
    return 0;
}
