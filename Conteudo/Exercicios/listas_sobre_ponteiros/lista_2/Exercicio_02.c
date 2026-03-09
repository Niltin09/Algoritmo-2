#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Pt_BR.UTF-8");
    double numero;
    double *ponteiro;

    ponteiro = &numero;         
    *ponteiro = 3.1415;         

    printf("Endereço da variável: %p\n", &numero);
    printf("Valor do ponteiro (endereço): %p\n", ponteiro);
    printf("Valor da variável: %lf\n", numero);
    printf("Valor da variável via ponteiro: %lf\n", *ponteiro);

    return 0;
}