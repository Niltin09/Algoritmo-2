#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char *z = (char*)malloc(sizeof(char));
    if (!z) return 1;
    *z = 'c';
    printf("Valor: %c", *z);
    free(z);
    return 0;
}
