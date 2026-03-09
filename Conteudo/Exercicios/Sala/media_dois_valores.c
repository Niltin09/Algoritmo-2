#include <stdio.h>
#include <locale.h>

/* Calcula a média de dois valores reais digitados pelo usuário */

static float lerValor(const char *rotulo) {
    float v;
    printf("Digite o valor %s: ", rotulo);
    scanf("%f", &v);
    return v;
}

static float calcularMedia(float a, float b) {
    return (a + b) / 2.0f;
}

static void apresentarMedia(float media) {
    printf("A média dos dois valores é: %.2f\n", media);
}

int main(void) {
    setlocale(LC_ALL, "Pt_BR.UTF-8");
    float v1 = lerValor("1");
    float v2 = lerValor("2");
    float m = calcularMedia(v1, v2);
    apresentarMedia(m);
    return 0;
}
