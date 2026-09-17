/******************************************************************************
Questão 10. Conversão de Temperatura de Celsius para Fahrenheit e Kelvin — Escreva 
um programa em C que leia uma temperatura expressa em graus Celsius (float ou double)
e mostre na tela o seu valor convertido para duas escalas termométricas: 
graus Fahrenheit e Kelvin. As fórmulas de conversão são: 
F = (C * 9/5) + 32 e K = C + 273.15.
*******************************************************************************/
#include <stdio.h>

int main() {
    double celsius, fahrenheit, kelvin;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%lf", &celsius);

    
    fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
    kelvin = celsius + 273.15;

    printf("\n--- Resultados da Conversao ---\n");
    printf("Celsius:    %.2f °C\n", celsius);
    printf("Fahrenheit: %.2f °F\n", fahrenheit);
    printf("Kelvin:     %.2f K\n", kelvin);

    return 0;
}