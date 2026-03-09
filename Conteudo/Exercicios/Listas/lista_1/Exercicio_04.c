#include <stdio.h>
#define pi 3.14159265358979323846

float lerRaio() {
    float raio;
    printf("Digite o raio do círculo: ");
    scanf("%f", &raio);
    return raio;
}

float calcularAreaCirculo(float raio) {
    return pi * raio * raio;
}

void apresentarArea(float area) {
    printf("A área do círculo é: %.2f\n", area);
}

void main() {
    float raio = lerRaio();
    float area = calcularAreaCirculo(raio);
    apresentarArea(area);
}