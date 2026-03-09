 #include <stdio.h>
 #include <stdlib.h>

 typedef struct {
     int codigo;
     float pressao;
     float temperatura;
 } Caldeira;

 void criarCaldeira(Caldeira **c) {
     *c = malloc(sizeof **c);
     if (*c == NULL) return;
     printf("Codigo: "); scanf("%d", &(*c)->codigo);
     printf("Pressao: "); scanf("%f", &(*c)->pressao);
     printf("Temperatura: "); scanf("%f", &(*c)->temperatura);
 }

 int main(void) {
     Caldeira *c = NULL;

     criarCaldeira(&c);
     if (c != NULL) {
         puts("\n=== DADOS DA CALDEIRA ===");
         printf("Codigo     : %d\n", c->codigo);
         printf("Pressao    : %.2f\n", c->pressao);
         printf("Temperatura: %.2f\n", c->temperatura);
     }

     free(c);
     return 0;
 }
