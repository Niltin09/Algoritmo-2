#include <stdio.h>

void c_para_f(double c, double *f) {
    if (f) *f = (9.0 * c / 5.0) + 32.0;
}

void f_para_c(double f, double *c) {
    if (c) *c = 5.0 * (f - 32.0) / 9.0;
}

void mostrar_menu(void) {
    printf("\nMenu de Conversao:\n");
    printf("1 - Celsius -> Fahrenheit\n");
    printf("2 - Fahrenheit -> Celsius\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
}

int main(void) {
    int opcao;
    while (1) {
        mostrar_menu();
        if (scanf("%d", &opcao) != 1) {
            printf("Entrada invalida. Encerrando.\n");
            return 1;
        }
        if (opcao == 0) {
            printf("Saindo...\n");
            break;
        } else if (opcao == 1) {
            double c, f;
            printf("Digite Celsius: ");
            if (scanf("%lf", &c) != 1) { printf("Entrada invalida.\n"); continue; }
            c_para_f(c, &f);
            printf("Celsius: %.2f -> Fahrenheit: %.2f\n", c, f);
        } else if (opcao == 2) {
            double f, c;
            printf("Digite Fahrenheit: ");
            if (scanf("%lf", &f) != 1) { printf("Entrada invalida.\n"); continue; }
            f_para_c(f, &c);
            printf("Fahrenheit: %.2f -> Celsius: %.2f\n", f, c);
        } else {
            printf("Opcao invalida.\n");
        }
    }
    return 0;
}
