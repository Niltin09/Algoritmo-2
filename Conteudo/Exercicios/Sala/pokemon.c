#include <stdio.h>
#include <string.h>

/* Cadastro simples de um Pokémon */

#define TAM_NOME 64
#define TAM_TIPO 32

typedef struct {
    char nome[TAM_NOME];
    char tipo[TAM_TIPO];
    int vida;
    int ataque;
    int defesa;
} Pokemon;

static int lerLinha(char *buf, size_t tam) {
    if (!fgets(buf, (int)tam, stdin)) return 0;
    size_t n = strlen(buf);
    if (n && buf[n-1] == '\n') buf[n-1] = '\0';
    return 1;
}

static void limparRestoLinha(void) {
    int c; while ((c = getchar()) != '\n' && c != EOF) {}
}

static void lerPokemon(Pokemon *p) {
    if (!p) return;
    printf("Nome: ");
    lerLinha(p->nome, TAM_NOME);
    printf("Tipo: ");
    lerLinha(p->tipo, TAM_TIPO);

    printf("Vida: ");
    while (scanf("%d", &p->vida) != 1) { printf("Invalido. Vida: "); limparRestoLinha(); }
    printf("Ataque: ");
    while (scanf("%d", &p->ataque) != 1) { printf("Invalido. Ataque: "); limparRestoLinha(); }
    printf("Defesa: ");
    while (scanf("%d", &p->defesa) != 1) { printf("Invalido. Defesa: "); limparRestoLinha(); }
    limparRestoLinha();
}

static void apresentar(const Pokemon *p) {
    if (!p) return;
    puts("\n=== POKEMON ===");
    printf("Nome  : %s\n", p->nome);
    printf("Tipo  : %s\n", p->tipo);
    printf("Vida  : %d\n", p->vida);
    printf("Ataque: %d\n", p->ataque);
    printf("Defesa: %d\n", p->defesa);
}

int main(void) {
    Pokemon pk;
    lerPokemon(&pk);
    apresentar(&pk);
    return 0;
}
