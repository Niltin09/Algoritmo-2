#include <stdio.h>

/* Versão mais básica possível do cadastro de Pokémon:
   - Usa apenas scanf
   - Sem validação de erro
   - Sem limpeza de buffer
   - Sem fgets (logo nomes/tipos não podem conter espaços)
*/

typedef struct {
    char nome[64];
    char tipo[32];
    int vida;
    int ataque;
    int defesa;
} Pokemon;

int main(void) {
    Pokemon p;
    printf("Nome: ");
    scanf("%63s", p.nome);      /* lê até espaço */
    printf("Tipo: ");
    scanf("%31s", p.tipo);
    printf("Vida: ");
    scanf("%d", &p.vida);
    printf("Ataque: ");
    scanf("%d", &p.ataque);
    printf("Defesa: ");
    scanf("%d", &p.defesa);

    printf("\n=== POKEMON ===\n");
    printf("Nome  : %s\n", p.nome);
    printf("Tipo  : %s\n", p.tipo);
    printf("Vida  : %d\n", p.vida);
    printf("Ataque: %d\n", p.ataque);
    printf("Defesa: %d\n", p.defesa);
    return 0;
}
