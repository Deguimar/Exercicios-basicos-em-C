/*4-Escreva um programa que calcule a media aritmetica de tres numeros*/

#include <stdio.h> // Inclui a biblioteca stdio.h para permitir entrada e saída de dados

int main() { // Função principal do programa
    float num1, num2, num3, media; // Declaração das variáveis do tipo float

    printf("Digite tres numeros: "); // Imprime uma mensagem para o usuário
    scanf("%f %f %f", &num1, &num2, &num3);// Lê os três números digitados pelo usuário e armazena nas variáveis 

    media = (num1 + num2 + num3) / 3;// Calcula a média aritmética dos três números 

    printf("A media aritmetica e: %.2f\n", media);//Imprime o resultado da média aritmética na tela

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
