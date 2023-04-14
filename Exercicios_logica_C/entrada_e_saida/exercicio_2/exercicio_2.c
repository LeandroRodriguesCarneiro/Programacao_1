#include<stdio.h>
#include<stdlib.h>
int main(){
    float celcius,fahrenheit;
    printf("Insira uma temperatura em Fahrenheit para ser convertida para Celcius");
    scanf("%f",&fahrenheit);
    celcius = (fahrenheit - 32)*(5/9);
    printf("O resultado da conversao foi: \n%.2f",celcius);
    return 0;
}
