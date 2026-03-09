#include <stdio.h>

float lerFahrenheit() {
    float f;
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    return f;
}

float fahrenheitParaCelsius(float f) {
    return 5 * (f - 32) / 9;
}

void apresentar(float f, float c) {
    printf("Temperatura em Celsius: %.2f\n", c);
    printf("Temperatura em Fahrenheit: %.2f\n", f);
}

void main() {
    float fahrenheit = lerFahrenheit();
    float celsius = fahrenheitParaCelsius(fahrenheit);
    apresentar(fahrenheit, celsius);
}