#include <stdio.h>
#include <stdlib.h>

/* Aloca inteiro e também inicializa valor (atribuição movida para a função) */
void aloca_e_inicializa_int(int **pp, int valor) {
    if (pp) {
        *pp = (int*) malloc(sizeof(int));
        if (!*pp) {
            fprintf(stderr, "Falha de alocacao.\n");
            return;
        }
        **pp = valor; /* atribuição agora dentro da função */
    }
}

int main(void) {
    int *a = NULL;
    aloca_e_inicializa_int(&a, 3);
    if (!a) return 1;
    printf("%d\n", *a);
    free(a);
    return 0;
}
