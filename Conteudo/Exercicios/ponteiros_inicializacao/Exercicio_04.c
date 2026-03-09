#include <stdio.h>
#include <stdlib.h>

/* Aloca vetor de 2 inteiros; atribuições ficam em main */
int* aloca_vetor2(void) {
    int *p = (int*) malloc(2 * sizeof(int));
    if (!p) fprintf(stderr, "Falha de alocacao.\n");
    return p;
}

int main(void) {
    int *a = aloca_vetor2();
    if (!a) return 1;
    *a = 3;          /* atribuição exigida na main */
    *(a + 1) = 5;    /* atribuição exigida na main */
    printf("%d\n", *a);
    printf("%d\n", *(a + 1));
    free(a);
    return 0;
}
