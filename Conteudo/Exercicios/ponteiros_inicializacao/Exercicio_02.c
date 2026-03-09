#include <stdio.h>
#include <stdlib.h>

/* Aloca inteiro; atribuição permanece em main conforme instrução */
void aloca_int(int **pp) {
    if (pp) {
        *pp = (int*) malloc(sizeof(int));
        if (!*pp) {
            fprintf(stderr, "Falha de alocacao.\n");
        }
    }
}

int main(void) {
    int *a = NULL;
    aloca_int(&a);
    if (!a) return 1;
    *a = 3; /* atribuição pedida para ficar em main */
    printf("%d\n", *a);
    free(a);
    return 0;
}
