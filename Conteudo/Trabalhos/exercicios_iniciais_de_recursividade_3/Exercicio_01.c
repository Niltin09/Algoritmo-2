#include <stdio.h>
#include <stdlib.h>

void adivinha(int x) {
    int y;
    printf("\nJogador 2, digite um numero:");
    scanf("%d", &y);

    if (x != y) {
        adivinha(x);
    }
}

int main() {
    int x;

    printf("\nJogo da adivinhacao!");
    printf("\nJogador 1, escolha um numero:");
    scanf("%d", &x);

    system("CLS"); 

    adivinha(x);

    printf("\nParabens!!! Voce adivinhou o numero digitado pelo jogador 1!!!");
    return 0;
}