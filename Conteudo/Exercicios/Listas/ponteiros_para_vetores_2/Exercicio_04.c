#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *valores = (double*) malloc(5 * sizeof(double));
    if(!valores) {
        fprintf(stderr, "Falha de alocacao.\n");
        return 1;
    }

    for (size_t i = 0; i < 5; ++i) {
        printf("Digite o %zuº numero real: ", i + 1);
        if (scanf("%lf", valores + i) != 1) {
            fprintf(stderr, "Entrada invalida.\n");
            free(valores);
            return 1;
        }
    }

    double *menor = valores;
    for (size_t i = 1; i < 5; ++i) {
        if (*(valores + i) < *menor) {
            menor = valores + i;
        }
    }

    printf("Menor valor: %.6f\n", *menor);

    free(valores);
    return 0;
}
