#include <stdio.h>

void imprime_ate_3(int i) {
    if (i >= 4) return;
     printf("\nE da-lhe %d", i);
    imprime_ate_3(i + 1);
 }

 int main(void) {
     imprime_ate_3(0);
     return 0;
 }
