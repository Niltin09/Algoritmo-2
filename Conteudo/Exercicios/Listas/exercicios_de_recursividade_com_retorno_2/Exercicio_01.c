#include <stdio.h>

int soma_pos(int n) {
    if (n <= 0) return 0;
    int parcial = soma_pos(n - 1); 
    return parcial + n;            
}

int main(void) {
    int n;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%d", &n) != 1) return 0;
    printf("A somatoria do numero é: %d\n", soma_pos(n));
    return 0;
}
