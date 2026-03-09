#include <stdio.h>

typedef struct {
    char ra[20];
    char nome[80];
    char endereco[120];
} Aluno;

void lerAluno(Aluno *a) {
    printf("RA: ");
    scanf("%19s", a->ra);
    printf("Nome (sem espaços): ");
    scanf("%79s", a->nome);
    printf("Endereco (sem espaços): ");
    scanf("%119s", a->endereco);
}

void apresentarAluno(const Aluno *a) {
    puts("\n=== DADOS DO ALUNO ===");
    printf("RA       : %s\n", a->ra);
    printf("Nome: %s\n", a->nome);
    printf("Endereco : %s\n", a->endereco);
}

int main(void) {
    Aluno aluno;           
    lerAluno(&aluno);      
    apresentarAluno(&aluno);
    return 0;
}
