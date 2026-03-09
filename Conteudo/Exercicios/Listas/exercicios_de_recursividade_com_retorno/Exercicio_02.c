#include <stdio.h>

long long fatorial_rec(long long n) {
    if (n <= 1) return 1;
    return n * fatorial_rec(n - 1);
}

int main(void) {
    long long n;
    printf("Digite um numero inteiro positivo: ");
    if (scanf("%lld", &n) != 1) return 0;
    printf("%lld\n", fatorial_rec(n));
    return 0;
}
