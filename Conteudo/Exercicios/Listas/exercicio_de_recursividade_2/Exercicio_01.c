#include <stdio.h>

static void loop_rec(int x, int i) {
    if (i >= x) return;
    printf("\nQue legal! Estou em loop!");
    printf("\nE da-lhe %d", x);
    loop_rec(x, i + 1);
}

int main(void) {
    int x;
    scanf("%d", &x);
    loop_rec(x, 0);
    return 0;
}
