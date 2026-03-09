#include <stdio.h>

int conta_pares_pos(int n) {
    if (n == 0) return 0;
    int v; 
    printf("Digite o %d numero: ", 6 - n);  
    scanf("%d", &v);
    int parcial = conta_pares_pos(n - 1); 
    int add = (v % 2 == 0) ? 1 : 0;       
    return parcial + add;
}

int main(void) {
    int total = conta_pares_pos(5);
    printf("%d dos 5 numeros sao pares\n", total);
    return 0;
}
