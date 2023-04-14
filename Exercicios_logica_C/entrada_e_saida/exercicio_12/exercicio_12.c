#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor1,valor2,valor3,quadrado1,quadrado2,quadrado3,soma;
    printf("insira o primeiro valor \n");
    scanf("%i",&valor1);
    printf("insira o segundo valor \n");
    scanf("%i",&valor2);
    printf("insira o terceiro valor \n");
    scanf("%i",&valor3);
    quadrado1 = valor1 * valor1;
    quadrado2 = valor2 * valor2;
    quadrado3 = valor3 * valor3;
    soma = quadrado1 + quadrado2 + quadrado3;
    printf("O resultado e %i",soma);
    return 0;
}
