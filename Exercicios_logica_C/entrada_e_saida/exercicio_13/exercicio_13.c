#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor1,valor2,valor3,quadrado,soma;
    printf("insira o primeiro valor \n");
    scanf("%i",&valor1);
    printf("insira o segundo valor \n");
    scanf("%i",&valor2);
    printf("insira o terceiro valor \n");
    scanf("%i",&valor3);
    soma = valor1 + valor2 + valor3;
    quadrado = soma * soma;
    printf("O resultado e %i",quadrado);
    return 0;
}