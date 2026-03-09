#include <stdio.h>

// Converte Fahrenheit para Celsius e grava em *c
void f_para_c(double f, double *c) {
    if (c) {
        *c = 5.0 * (f - 32.0) / 9.0;
    }
}

int main(void) {
    double f, c = 0.0;
    printf("Digite a temperatura em Fahrenheit: ");
    if (scanf("%lf", &f) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    f_para_c(f, &c);
    printf("Celsius: %.2f\n", c);
    return 0;
}
