#include <stdio.h>

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

void lerDvd(Dvd *d) {
    char buf[128];
    printf("Titulo: ");
    if (fgets(d->titulo, sizeof d->titulo, stdin) != NULL) strip_newline(d->titulo);
    printf("Genero: ");
    if (fgets(d->genero, sizeof d->genero, stdin) != NULL) strip_newline(d->genero);
    printf("Duracao (min): ");
    if (fgets(buf, sizeof buf, stdin) != NULL) sscanf(buf, "%d", &d->duracao);
    printf("Prateleira: ");
    if (fgets(d->prateleira, sizeof d->prateleira, stdin) != NULL) strip_newline(d->prateleira);
}

void apresentarDvd(const Dvd *d) {
    puts("\n=== DADOS DO DVD ===");
    printf("Titulo    : %s\n", d->titulo);
    printf("Genero    : %s\n", d->genero);
    printf("Duracao   : %d min\n", d->duracao);
    printf("Prateleira: %s\n", d->prateleira);
}

int main(void) {
    Dvd d;
    lerDvd(&d);
    apresentarDvd(&d);
    return 0;
}
