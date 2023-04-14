#include <stdio.h>
#include <stdlib.h>
int main(){
    float dolar,real,cotacao_do_dolar;
    printf("insira o valor em dolar que desaje ser convertido para real \n");
    scanf("%f",&real);
    printf("insira a cotacao do dolar atualemnte \n");
    scanf("%f",&cotacao_do_dolar);
    dolar = real/cotacao_do_dolar;
    printf("O valor convertido e: %.2f",dolar);
    return 0;
}
