#include <stdio.h>

void par_ou_impar(int a) {
    if (a < 8) {
        if (a % 2 == 0)
            printf("\n%d = par", a);
        else
            printf("\n%d = impar", a);

        par_ou_impar(a + 1); 
    }
}

int main() {
    int a;

    printf("\nDigite um numero");
    scanf("%d", &a);

    par_ou_impar(a);

    return 0;
}