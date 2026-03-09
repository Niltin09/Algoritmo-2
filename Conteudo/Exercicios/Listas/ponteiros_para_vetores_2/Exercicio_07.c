#include <stdio.h>
#include <stdlib.h>

int main(void) {
    const size_t N = 6;
    int *v = (int*) malloc(N * sizeof(int));
    if(!v) { fprintf(stderr, "Falha de alocacao.\n"); return 1; }

    for (size_t i = 0; i < N; ++i) {
        printf("Digite o %zuº inteiro: ", i + 1);
        int temp;
        if (scanf("%d", &temp) != 1) { fprintf(stderr, "Entrada invalida.\n"); free(v); return 1; }
        *(v + (N - 1 - i)) = temp;
    }

    puts("Vetor resultante (ja invertido durante a leitura):");
    for (size_t i = 0; i < N; ++i) {
        printf("%d ", *(v + i));
    }
    putchar('\n');

    free(v);
    return 0;
}
