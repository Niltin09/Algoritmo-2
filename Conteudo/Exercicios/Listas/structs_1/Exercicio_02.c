#include <stdio.h>

typedef struct {
    char titulo[80];
    char genero[40];
    int duracaoMin;
    char prateleira[20];
} Dvd;

void lerDvd(Dvd *d) {
    printf("Titulo (sem espaços): "); scanf("%79s", d->titulo);
    printf("Genero (sem espaços): "); scanf("%39s", d->genero);
    printf("Duracao (minutos): "); scanf("%d", &d->duracaoMin);
    printf("Prateleira (sem espaços): "); scanf("%19s", d->prateleira);
}

void apresentarDvd(const Dvd *d) {
    puts("\n=== DVD CADASTRADO ===");
    printf("Titulo    : %s\n", d->titulo);
    printf("Genero    : %s\n", d->genero);
    printf("Duracao   : %d min\n", d->duracaoMin);
    printf("Prateleira: %s\n", d->prateleira);
}

int main(void) {
    Dvd dvd;
    lerDvd(&dvd);
    apresentarDvd(&dvd);
    return 0;
}
