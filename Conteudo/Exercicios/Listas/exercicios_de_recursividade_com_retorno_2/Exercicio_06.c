#include <stdio.h>

int conta_3_a_8_pos(int n) {
    if (n == 0) return 0;
    int v; 
    printf("Digite o %d numero: ", 6 - n);
    scanf("%d", &v);
    int parcial = conta_3_a_8_pos(n - 1); 
    int add = (v >= 3 && v <= 8) ? 1 : 0; 
    return parcial + add;
}

int main(void) {
    int total = conta_3_a_8_pos(5);
    printf("%d dos 5 numeros estao entre 3 e 8\n", total);
    return 0;
}
