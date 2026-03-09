#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Pt_BR.UTF-8");
    
    int r = 10;           
    int *ptr_r = &r;      

    *ptr_r = 25;          

    printf("Valor de r: %d\n", *ptr_r);  
    printf("Endereço de r: %p\n", (void*)&r);
    printf("Endereço via ponteiro: %p\n", (void*)ptr_r);


    return 0;
}

/*
    Tabela de Execução:
    | Etapa                    | Valor de r | Conteúdo de ptr_r  | Valor de *ptr_r |
    |--------------------------|------------|--------------------|-----------------|
    | Após declaração          |     10     | Endereço de r      |       10        |
    | Após modificação         |     25     | Endereço de r      |       25        |
    | Impressão final          |     25     | Endereço de r      |       25        |
*/
