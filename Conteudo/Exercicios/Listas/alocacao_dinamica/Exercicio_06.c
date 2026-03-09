#include <stdio.h>
#include <stdlib.h>

int* ler(){
    int *a = (int*)malloc(sizeof(int));
    if (!a) return NULL;
    printf("Digite um valor: ");
    if (scanf("%d", a) != 1) { free(a); return NULL; }
    return a;
}

int main(void) {
    int *a = ler();
    if (!a) return 1;
    printf("Valor: %d", *a);
    free(a);
    return 0;
}
