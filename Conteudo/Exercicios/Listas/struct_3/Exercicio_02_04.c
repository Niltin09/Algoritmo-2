 #include <stdio.h>
 #include <stdlib.h>

 typedef struct {
     int codigo;
     char nome[50];
     float preco;
 } Produto;

 void criarProduto(Produto **p) {
     *p = malloc(sizeof **p);
     if (*p == NULL) return;
     printf("Codigo: "); scanf("%d", &(*p)->codigo);
     printf("Nome: "); getchar(); scanf("%49[^\n]", (*p)->nome);
     printf("Preco: "); scanf("%f", &(*p)->preco);
 }

 int main(void) {
     Produto *p = NULL;

     criarProduto(&p);
     if (p != NULL) {
         puts("\n=== DADOS DO PRODUTO ===");
         printf("Codigo: %d\n", p->codigo);
         printf("Nome  : %s\n", p->nome);
         printf("Preco : %.2f\n", p->preco);
     }

     free(p);
     return 0;
 }
