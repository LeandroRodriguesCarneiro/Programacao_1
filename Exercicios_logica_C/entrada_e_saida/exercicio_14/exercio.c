#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor1,valor2,valor3,valor4,soma,multiplicacao;
    printf("O primeiro valor e: \n");
    scanf("%i",&valor1);
    printf("O segundo valor e: \n");
    scanf("%i",&valor2);
    printf("O terceiro valor e: \n");
    scanf("%i",&valor3);
    printf("O quarto valor e: \n");
    scanf("%i",&valor4);
    multiplicacao = valor1 * valor3;
    soma = valor2 + valor4;
    printf("valor da multiplicacao do primeiro e do terceiro valor: %i \n",multiplicacao);
    printf("Valor da soma do segundo e do quarto valor: %i",soma);
    return 0;
}
