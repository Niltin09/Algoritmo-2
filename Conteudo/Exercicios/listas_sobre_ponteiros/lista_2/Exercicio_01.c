#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Pt_BR.UTF-8");
    int valor;
    int *ponteiro;

    ponteiro = &valor;         
    *ponteiro = 42;            

    printf("Endereço da variável: %p\n", &valor);
    printf("Valor do ponteiro (endereço): %p\n", ponteiro);
    printf("Valor da variável: %d\n", valor);
    printf("Valor da variável via ponteiro: %d\n", *ponteiro);

    return 0;
}