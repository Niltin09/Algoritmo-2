#include <stdio.h>
#include <stdlib.h>

static void inverter(int *v, size_t n) {
    size_t i = 0, j = n - 1;
    while (i < j) {
        int tmp = *(v + i);
        *(v + i) = *(v + j);
        *(v + j) = tmp;
        ++i; --j;
    }
}

int main(void) {
    const size_t N = 6;
    int *v = (int*) malloc(N * sizeof(int));
    if(!v) { fprintf(stderr, "Falha de alocacao.\n"); return 1; }

    for (size_t i = 0; i < N; ++i) {
        printf("Digite o %zuº inteiro: ", i + 1);
        if (scanf("%d", v + i) != 1) { fprintf(stderr, "Entrada invalida.\n"); free(v); return 1; }
    }

    inverter(v, N);

    puts("Vetor apos inversao final:");
    for (size_t i = 0; i < N; ++i) {
        printf("%d ", *(v + i));
    }
    putchar('\n');

    free(v);
    return 0;
}
