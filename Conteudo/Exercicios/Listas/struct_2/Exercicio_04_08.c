#include <stdio.h>

static void strip_newline(char *s) {
    int i;
    for (i = 0; s[i]; ++i) {
        if (s[i] == '\n') { s[i] = '\0'; break; }
    }
}

typedef struct {
    char nome[10];
    int vida;
    int ataque;
    int defesa;
} Pokemon;

void lerPokemon(Pokemon *p) {
    char buf[64];
    printf("Nome: ");
    if (fgets(p->nome, sizeof p->nome, stdin) != NULL) strip_newline(p->nome);
    printf("Vida: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &p->vida);
    printf("Ataque: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &p->ataque);
    printf("Defesa: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &p->defesa);
}

void apresentarPokemon(const Pokemon *p) {
    puts("\n=== DADOS DO POKEMON ===");
    printf("Nome   : %s\n", p->nome);
    printf("Vida   : %d\n", p->vida);
    printf("Ataque : %d\n", p->ataque);
    printf("Defesa : %d\n", p->defesa);
}

int main(void) {
    Pokemon p;
    lerPokemon(&p);
    apresentarPokemon(&p);
    return 0;
}
