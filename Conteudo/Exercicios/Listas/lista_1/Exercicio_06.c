#include <stdio.h>

int lerAnos() {
    int anos;
    printf("Digite sua idade em anos: ");
    scanf("%d", &anos);
    return anos;
}

int calcularDias(int anos) {
    return anos * 365; // Ignorando anos bissextos
}

void apresentarResultado(int dias) {
    printf("Você viveu aproximadamente %d dias.\n", dias);
}

void main() {
    int anos = lerAnos();
    int dias = calcularDias(anos);
    apresentarResultado(dias);
}