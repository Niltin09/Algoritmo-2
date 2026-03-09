#include <stdio.h>

// Converte Celsius para Fahrenheit e grava em *f
void c_para_f(double c, double *f) {
    if (f) {
        *f = (9.0 * c / 5.0) + 32.0;
    }
}

int main(void) {
    double c, f = 0.0;
    printf("Digite a temperatura em Celsius: ");
    if (scanf("%lf", &c) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    c_para_f(c, &f);
    printf("Fahrenheit: %.2f\n", f);
    return 0;
}
