#include <stdio.h>

typedef struct {
    char nome[64];
    int vida;
    int ataque;
    int defesa;
} Monstro;

void lerMonstro(Monstro *m) {
    printf("Nome (sem espaços): "); scanf("%63s", m->nome);
    printf("Vida: "); scanf("%d", &m->vida);
    printf("Ataque: "); scanf("%d", &m->ataque);
    printf("Defesa: "); scanf("%d", &m->defesa);
}

void apresentarMonstro(const Monstro *m) {
    puts("\n=== MONSTRO CADASTRADO ===");
    printf("Nome  : %s\n", m->nome);
    printf("Vida  : %d\n", m->vida);
    printf("Ataque: %d\n", m->ataque);
    printf("Defesa: %d\n", m->defesa);
}

int main(void) {
    Monstro monstro;
    lerMonstro(&monstro);
    apresentarMonstro(&monstro);
    return 0;
}
