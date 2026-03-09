#include <stdio.h>

int lerMinutos() {
    int minutos;
    printf("Digite o valor em minutos: ");
    scanf("%d", &minutos);
    return minutos;
}

int converterMinutosParaSegundos(int minutos) {
    return minutos * 60;
}

void apresentarResultado(int minutos, int segundos) {
    printf("%d minutos equivalem a %d segundos.\n", minutos, segundos);
}

void main() {
    int minutos = lerMinutos();
    int segundos = converterMinutosParaSegundos(minutos);
    apresentarResultado(minutos, segundos);
}