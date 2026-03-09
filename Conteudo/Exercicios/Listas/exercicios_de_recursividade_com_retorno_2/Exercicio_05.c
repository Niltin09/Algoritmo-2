#include <stdio.h>

int max4_rec(int n, int pos) {
    int v, menor;       
    printf("Digite o %d numero: ", pos);
    if (scanf("%d", &v) != 1) 
    return v; 
    if (n == 1) {
        return v; 
    }
    menor = max4_rec(n - 1, pos + 1);
    return (v < menor) ? v : menor;
}

int main(void) {
    int menor = max4_rec(4, 1);
    printf("O numero %d eh o menor\n", menor);
    return 0;
}
