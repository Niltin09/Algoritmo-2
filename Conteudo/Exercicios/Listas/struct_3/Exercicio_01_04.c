 #include <stdio.h>
 #include <stdlib.h>

 typedef struct {
     char ra[20];
     char nome[50];
     char endereco[100];
 } Aluno;

 void criarAluno(Aluno **a) {
     *a = malloc(sizeof **a);
     if (*a == NULL) return;
     printf("RA: "); scanf("%19s", (*a)->ra);
     printf("Nome: "); getchar(); scanf("%49[^\n]", (*a)->nome);
     printf("Endereco: "); getchar(); scanf("%99[^\n]", (*a)->endereco);
 }

 int main(void) {
     Aluno *a = NULL;

     criarAluno(&a);
     if (a != NULL) {
         puts("\n=== DADOS DO ALUNO ===");
         printf("RA      : %s\n", a->ra);
         printf("Nome    : %s\n", a->nome);
         printf("Endereco: %s\n", a->endereco);
     }

     free(a);
     return 0;
 }
