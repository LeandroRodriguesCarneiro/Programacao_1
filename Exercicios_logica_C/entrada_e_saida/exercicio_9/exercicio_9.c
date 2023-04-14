#include<stdio.h>
#include<stdlib.h>
int main(){
    float valor1, valor2,subtracao, quadrado;
    printf("insira o primeiro valor \n");
    scanf("%f",&valor1);
    printf("insira o segundo valor \n");
    scanf("%f",&valor2);
    subtracao = valor1 - valor2;
    quadrado = subtracao * subtracao;
    printf("O quadrado da subtracao e: %.2f",quadrado);
    return 0;
}
