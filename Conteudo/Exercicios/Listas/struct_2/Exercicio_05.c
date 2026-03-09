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
    Pokemon *ptr = &p;
    char buf[64];

    printf("Nome: ");
    if (fgets(ptr->nome, sizeof ptr->nome, stdin) != NULL) strip_newline(ptr->nome);
    printf("Vida: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &ptr->vida);
    printf("Ataque: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &ptr->ataque);
    printf("Defesa: ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &ptr->defesa);

    puts("\n=== DADOS DO POKEMON (via ponteiro) ===");
    printf("Nome   : %s\n", ptr->nome);
    printf("Vida   : %d\n", ptr->vida);
    printf("Ataque : %d\n", ptr->ataque);
    printf("Defesa : %d\n", ptr->defesa);

    return 0;
}
