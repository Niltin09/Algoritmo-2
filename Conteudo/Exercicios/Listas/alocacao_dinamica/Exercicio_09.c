#include <stdio.h>
#include <stdlib.h>

int* ler(){
    int *a = (int*)malloc(sizeof(int));
    if (!a) return NULL;
    printf("\nDigite um valor: ");
    if (scanf("%d", a) != 1) { free(a); return NULL; }
    return a;
}

int* calcular(const int *a){
    if (!a) return NULL;
    int *i = (int*)malloc(sizeof(int));
    if (!i) return NULL;
    *i = 2020 - (*a);
    return i;
}

void apresentar(const int *i){
    if (i) printf("\nIdade: %d", *i);
}

int main(void) {
    int *ano = ler();
    if (!ano) return 1;
    int *idade = calcular(ano);
    if (!idade) { free(ano); return 1; }
    apresentar(idade);
    free(idade);
    free(ano);
    return 0;
}
