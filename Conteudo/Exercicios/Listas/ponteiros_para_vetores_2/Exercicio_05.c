#include <stdio.h>
#include <stdlib.h>

static void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int *v = (int*) malloc(5 * sizeof(int));
    if(!v) { fprintf(stderr, "Falha de alocacao.\n"); return 1; }

    for (size_t i = 0; i < 5; ++i) {
        printf("Digite o %zuº inteiro: ", i + 1);
        if (scanf("%d", v + i) != 1) { fprintf(stderr, "Entrada invalida.\n"); free(v); return 1; }
    }

    trocar(v, v + 4);

    puts("Vetor apos a troca do primeiro com o ultimo:");
    for (size_t i = 0; i < 5; ++i) {
        printf("%d ", *(v + i));
    }
    putchar('\n');

    free(v);
    return 0;
}
