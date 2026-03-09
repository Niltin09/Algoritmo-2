#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Pt_BR.UTF-8");
    
    float s = 3.14f;          // Variável do tipo float
    float *ptr_s = &s;        // Ponteiro para s

    *ptr_s = 6.28f;           // Modifica s via ponteiro

    printf("Valor de s: %.2f\n", *ptr_s);
    printf("Endereço de s: %p\n", (void*)&s);
    printf("Endereço via ponteiro: %p\n", (void*)ptr_s);

    return 0;
}

/*
    Tabela de Execução:
    | Etapa                    | Valor de s | Conteúdo de ptr_s  | Valor de *ptr_s |
    |--------------------------|------------|--------------------|-----------------|
    | Após declaração          |   3.14     | Endereço de s      |      3.14       |
    | Após modificação         |   6.28     | Endereço de s      |      6.28       |
    | Impressão final          |   6.28     | Endereço de s      |      6.28       |
*/
