#include <stdio.h>

float lerValor() {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);
    return valor;
}

float calcularQuadrado(float valor) {
    return valor * valor;
}

void apresentarResultado(float valor, float quadrado) {
    printf("O quadrado de %.2f é %.2f\n", valor, quadrado);
}

void main() {
    float valor = lerValor();
    float quadrado = calcularQuadrado(valor);
    apresentarResultado(valor, quadrado);
}