#include <stdio.h>
#include <stdlib.h>

int main(void) {
    double *x = (double*)malloc(sizeof(double));
    if (!x) return 1;
    *x = 3.2;
    printf("Valor: %lf", *x);
    free(x);
    return 0;
}
