#include <stdio.h>

/* Inicializa variavel inteira via passagem por referencia */
void inicializa_int(int *p, int valor) {
    if (p) *p = valor; /* atribuição feita na função auxiliar (pedido) */
}

int main(void) {
    int a; /* variavel local */
    inicializa_int(&a, 3);
    printf("%d\n", a);
    return 0;
}
