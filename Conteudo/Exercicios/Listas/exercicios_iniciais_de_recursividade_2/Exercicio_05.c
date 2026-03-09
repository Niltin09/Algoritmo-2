 #include <stdio.h>

 void menu(void) {
     int a;
     printf("\nMenu:");
     printf("\n1-Dizer oi");
     printf("\nOutro numero para sair");
     printf("\n");
     scanf("%d", &a);
     if (a == 1) {
         printf("\nOi");
         menu
    ();
     }
 }

 int main(void) {
     menu
();
     return 0;
 }
