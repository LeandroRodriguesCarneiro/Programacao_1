#include<stdio.h>
#include<stdlib.h>
int main(){
    float celcius,fahrenheit;
    printf("insira uma temperatura em graus Celcius para converter para Fahrenheit");
    scanf("%f", &celcius);
    fahrenheit= (celcius * 9 + 160) / 5;
    printf("O resultado da conversao foi: \n%.2f",fahrenheit);
    return (0);
}



