#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a = (int*)malloc(sizeof(int));
    if (!a) return 1;
    printf("\nDigite um valor: ");
    if (scanf("%d", a) != 1) { free(a); return 1; }
    printf("Valor: %d", *a);
    free(a);
    return 0;
}
