#include <stdio.h>

int max4_rec(int n, int pos) {
    int v, maior;       
    printf("Digite o %d numero: ", pos);
    if (scanf("%d", &v) != 1) 
    return v; 
    if (n == 1) {
        return v; 
    }
    maior = max4_rec(n - 1, pos + 1);
    return (v > maior) ? v : maior;
}

int main(void) {
    int maior = max4_rec(4, 1);
    printf("O numero %d eh o maior\n", maior);
    return 0;
}
