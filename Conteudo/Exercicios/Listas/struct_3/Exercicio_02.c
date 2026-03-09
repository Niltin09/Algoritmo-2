 #include <stdio.h>
 #include <stdlib.h>

 typedef struct {
     int codigo;
     char nome[50];
     float preco;
 } Produto;

 int main(void) {
     Produto *p = malloc(sizeof *p);
     if (p == NULL) {
         fprintf(stderr, "Erro: memoria insuficiente\n");
         return 1;
     }

     printf("Codigo: ");
     scanf("%d", &p->codigo);
     printf("Nome: ");
     getchar(); scanf("%49[^\n]", p->nome);
     printf("Preco: ");
     scanf("%f", &p->preco);

     puts("\n=== DADOS DO PRODUTO ===");
     printf("Codigo: %d\n", p->codigo);
     printf("Nome  : %s\n", p->nome);
     printf("Preco : %.2f\n", p->preco);

     free(p);
     return 0;
 }
