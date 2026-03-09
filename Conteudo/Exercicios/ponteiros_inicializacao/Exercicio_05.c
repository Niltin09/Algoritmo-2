#include <stdio.h>
#include <stdlib.h>

/* Aloca vetor de 2 inteiros já inicializado (desafio) */
int* aloca_vetor2_inicializado(int v0, int v1) {
    int *p = (int*) malloc(2 * sizeof(int));
    if (!p) {
        fprintf(stderr, "Falha de alocacao.\n");
        return NULL;
    }
    p[0] = v0; /* atribuições movidas para a função */
    p[1] = v1;
    return p;
}

int main(void) {
    int *a = aloca_vetor2_inicializado(3, 5);
    if (!a) return 1;
    printf("%d\n", *a);
    printf("%d\n", *(a + 1));
    free(a);
    return 0;
}
