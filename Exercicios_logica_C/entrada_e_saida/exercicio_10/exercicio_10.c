#include<stdio.h>
#include<stdlib.h>
int main()
{
    float dolar,real,cotacao_do_dolar;
    printf("insira o valor em dolar que desaje ser convertido para real \n");
    scanf("%f",&dolar);
    printf("insira a cotacao do dolar atualemnte");
    scanf("%f",&cotacao_do_dolar);
    real = dolar*cotacao_do_dolar;
    printf("O valor convertido e: %.2f",real);
    return 0;
}
