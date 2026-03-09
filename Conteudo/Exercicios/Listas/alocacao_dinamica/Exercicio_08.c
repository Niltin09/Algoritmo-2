#include <stdio.h>
#include <stdlib.h>

int* calcular(const int *a){
    if (!a) return NULL;
    int *res = (int*)malloc(sizeof(int));
    if (!res) return NULL;
    *res = (*a) * 2;
    return res;
}

int main(void) {
    int *a = (int*)malloc(sizeof(int));
    if (!a) return 1;
    *a = 3;
    int *dobro = calcular(a);
    if (!dobro) { free(a); return 1; }
    printf("Valor: %d %d", *a, *dobro);
    free(dobro);
    free(a);
    return 0;
}
