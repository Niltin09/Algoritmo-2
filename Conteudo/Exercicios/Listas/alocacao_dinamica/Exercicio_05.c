#include <stdio.h>
#include <stdlib.h>

void apresentar(const int *b){
    if (b) printf("Valor: %d", *b);
}

int main(void) {
    int *a = (int*)malloc(sizeof(int));
    if (!a) return 1;
    *a = 4;
    apresentar(a);
    free(a);
    return 0;
}
