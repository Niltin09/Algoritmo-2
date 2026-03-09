#include <stdio.h>

typedef struct {
    char nome[10];
    int vida;
    int ataque;
    int defesa;
} Pokemon;

static void strip_newline(char *s) {
    int i;
    for (i = 0; s[i]; ++i) {
        if (s[i] == '\n') { s[i] = '\0'; break; }
    }
}

int main(void) {
    Pokemon p;
    char buf[64];
    printf("Nome: ");
    if (fgets(p.nome, sizeof p.nome, stdin) != NULL) strip_newline(p.nome);

    printf("Vida: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &p.vida);

    printf("Ataque: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &p.ataque);

    printf("Defesa: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &p.defesa);

    puts("\n=== DADOS DO POKEMON ===");
    printf("Nome   : %s\n", p.nome);
    printf("Vida   : %d\n", p.vida);
    printf("Ataque : %d\n", p.ataque);
    printf("Defesa : %d\n", p.defesa);

    return 0;
}
