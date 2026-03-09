#include <stdio.h>

int soma4_rec(int n) {
    if (n == 0) return 0; 
    int v; 
    printf("Digite o %d numero: ", 5 - n);
    scanf("%d", &v);
    int parcial = soma4_rec(n - 1); 
    return parcial + v;
}

int main(void) {
    int total = soma4_rec(4);
    float media = total / 4.0f;
    printf("Soma= %d Media= %.2f\n", total, media);
    return 0;
}
