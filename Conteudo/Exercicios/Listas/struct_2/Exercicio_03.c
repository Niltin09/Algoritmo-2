#include <stdio.h>
#include <stdlib.h>

static void strip_newline(char *s) {
    int i;
    for (i = 0; s[i]; ++i) {
        if (s[i] == '\n') { s[i] = '\0'; break; }
    }
}

typedef struct {
    char titulo[51];
    char genero[21];
    int duracao;
    char prateleira[11];
} Dvd;

int main(void) {
    Dvd *p = malloc(sizeof *p);
    if (p == NULL) {
        fprintf(stderr, "Erro: memoria insuficiente\n");
        return 1;
    }

    char buf[128];
    printf("Titulo: ");
    if (fgets(p->titulo, sizeof p->titulo, stdin) != NULL) strip_newline(p->titulo);

    printf("Genero: ");
    if (fgets(p->genero, sizeof p->genero, stdin) != NULL) strip_newline(p->genero);

    printf("Duracao (min): ");
    if (fgets(buf, sizeof buf, stdin) != NULL) { sscanf(buf, "%d", &p->duracao); }

    printf("Prateleira: ");
    if (fgets(p->prateleira, sizeof p->prateleira, stdin) != NULL) strip_newline(p->prateleira);

    puts("\n=== DADOS DO DVD (alocado dinamicamente) ===");
    printf("Titulo    : %s\n", p->titulo);
    printf("Genero    : %s\n", p->genero);
    printf("Duracao   : %d min\n", p->duracao);
    printf("Prateleira: %s\n", p->prateleira);

    free(p);
    return 0;
}
