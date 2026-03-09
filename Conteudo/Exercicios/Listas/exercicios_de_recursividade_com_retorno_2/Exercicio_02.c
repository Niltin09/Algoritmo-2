#include <stdio.h>

long long fatorial(long long n) {
    if (n <= 1) return 1;
    long long parcial = fatorial(n - 1); 
    return parcial * n;                  
}

int main(void) {
    long long n;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%lld", &n) != 1) return 0;
    printf("O fatorial do numero é: %lld\n", fatorial(n));
    return 0;
}
