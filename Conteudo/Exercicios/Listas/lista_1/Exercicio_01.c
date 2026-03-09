#include <stdio.h>
float lerCelsius() {
    float c;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    return c;
}

float celsiusParaFahrenheit(float c) {
    return (9 * c / 5) + 32;
}

void apresentar(float c, float f) {
    printf("Temperatura em Celsius: %.2f\n", c);
    printf("Temperatura em Fahrenheit: %.2f\n", f);
}

void main() {
    float celsius = lerCelsius();
    float fahrenheit = celsiusParaFahrenheit(celsius);
    apresentar(celsius, fahrenheit);
}