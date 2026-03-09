#include <stdio.h>

void validar_1_a_3(int *a) {
     if (*a < 1 || *a > 3) {
         printf("\nErrrrou! Tente novamente!");
         scanf("%d", a);
         validar_1_a_3(a);
     }
 }

 int main(void) {
     int a;
     printf("\nDigite um numero entre 1 e 3");
     scanf("%d", &a);
     validar_1_a_3(&a);
     printf("Tchau");
     return 0;
 }
