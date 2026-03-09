#include <stdio.h>

void mmenu(void) {
     int a;
     printf("\nMenu:");
     printf("\n1-Dizer oi");
     printf("\n");
     scanf("%d", &a);
     if (a != 1) {
        mmenu();
        return;
     }
     printf("\nOi");
 }

 int main(void) {
     mmenu();
     return 0;
 }
