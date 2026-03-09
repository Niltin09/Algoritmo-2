 #include <stdio.h>
 #include <stdlib.h>

 typedef struct {
     char ra[20];
     char nome[50];
     char endereco[100];
 } Aluno;

 int main(void) {
     Aluno *a = malloc(sizeof *a);
     if (a == NULL) {
         fprintf(stderr, "Erro: memoria insuficiente\n");
         return 1;
     }

     printf("RA: ");
     scanf("%19s", a->ra);
     printf("Nome: ");
     getchar(); scanf("%49[^\n]", a->nome);
     printf("Endereco: ");
     getchar(); scanf("%99[^\n]", a->endereco);

     puts("\n=== DADOS DO ALUNO ===");
     printf("RA      : %s\n", a->ra);
     printf("Nome    : %s\n", a->nome);
     printf("Endereco: %s\n", a->endereco);

     free(a);
     return 0;
 }
