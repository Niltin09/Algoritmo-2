#include <stdio.h>

// Calcula salario corrigido pela inflacao e a perda aquisitiva absoluta.
// Usa 10,67% conforme 2015. Escreve resultados por referencia.
void calcular_inflacao(double salario_antigo, double *salario_corrigido, double *perda) {
    if (salario_corrigido) {
        *salario_corrigido = 110.67 * salario_antigo / 100.0;
    }
    if (perda && salario_corrigido) {
        *perda = *salario_corrigido - salario_antigo;
    }
}

int main(void) {
    double s_antigo, s_corrigido = 0.0, perda = 0.0;
    printf("Digite o salario de 2015: R$ ");
    if (scanf("%lf", &s_antigo) != 1) {
        printf("Entrada invalida.\n");
        return 1;
    }

    calcular_inflacao(s_antigo, &s_corrigido, &perda);
    printf("Para manter poder de compra: R$ %.2f\n", s_corrigido);
    printf("Perda aquisitiva sem reajuste: R$ %.2f\n", perda);
    return 0;
}
