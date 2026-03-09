#include <stdio.h>

// Converte Fahrenheit para Celsius e grava em *c
void f_para_c(double f, double *c) {
    if (c) {
        *c = 5.0 * (f - 32.0) / 9.0;
    }
}

// Retorna por referencia ambos valores: original em *f_out e convertido em *c_out
void converter_f_e_c(double f_in, double *f_out, double *c_out) {
    if (f_out) *f_out = f_in;
    f_para_c(f_in, c_out);
}

int main(void) {
    double f_in, f_out = 0.0, c_out = 0.0;
    printf("Digite a temperatura em Fahrenheit: ");
    if (scanf("%lf", &f_in) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    converter_f_e_c(f_in, &f_out, &c_out);
    printf("Fahrenheit: %.2f\nCelsius: %.2f\n", f_out, c_out);
    return 0;
}
