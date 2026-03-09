#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *a = (int*)malloc(sizeof(int));
    if (!a) return 1;
    *a = 3;
    printf("Valor: %d", *a);
    free(a);
    return 0;
}
