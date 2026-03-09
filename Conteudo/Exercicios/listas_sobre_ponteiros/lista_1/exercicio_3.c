#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Pt_BR.UTF-8");
    
    double t = 2.718;         // Variável do tipo double
    double *ptr_t = &t;       // Ponteiro para t

    *ptr_t = 3.1415;          // Modifica t via ponteiro

    printf("Valor de t: %.4lf\n", *ptr_t);
    printf("Endereço de t: %p\n", (void*)&t);
    printf("Endereço via ponteiro: %p\n", (void*)ptr_t);

    return 0;
}

/*
    Tabela de Execução:
    | Etapa                    | Valor de t | Conteúdo de ptr_t  | Valor de *ptr_t |
    |--------------------------|------------|--------------------|-----------------|
    | Após declaração          |   2.718    |       |     2.718       |
    | Após modificação         |  3.1415    | Endereço de t      |    3.1415       |
    | Impressão final          |  3.1415    | Endereço de t      |    3.1415       |
*/
