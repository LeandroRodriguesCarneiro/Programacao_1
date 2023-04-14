#include<stdio.h>
#include<stdlib.h>
int main(){
    int dias;
    float taxa,valor,prestacao;
    printf("insira quantos dias de atraso tem a fatura \n");
    scanf("%i",&dias);
    printf("insira qual o valor da pretacao \n");
    scanf("%f",&valor);
    printf("insira o valor da taxa dos juros \n");
    scanf("%f",&taxa);
    prestacao = valor+(valor*(taxa/100)*dias);
    printf("o valor atual da prestacao e: %.2f",prestacao);

    return 0;
}
