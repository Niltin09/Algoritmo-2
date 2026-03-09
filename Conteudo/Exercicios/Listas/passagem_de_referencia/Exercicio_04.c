#include <stdio.h>

// Converte Celsius para Fahrenheit e grava em *f
void c_para_f(double c, double *f) {
    if (f) {
        *f = (9.0 * c / 5.0) + 32.0;
    }
}

// Retorna por referencia ambos valores: original em *c_out e convertido em *f_out
void converter_c_e_f(double c_in, double *c_out, double *f_out) {
    if (c_out) *c_out = c_in;
    c_para_f(c_in, f_out);
}

int main(void) {
    double c_in, c_out = 0.0, f_out = 0.0;
    printf("Digite a temperatura em Celsius: ");
    if (scanf("%lf", &c_in) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    converter_c_e_f(c_in, &c_out, &f_out);
    printf("Celsius: %.2f\nFahrenheit: %.2f\n", c_out, f_out);
    return 0;
}
