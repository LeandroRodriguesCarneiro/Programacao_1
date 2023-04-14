#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("tabela de precos\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n\t 1 - produto ABCD - R$ 05,30;\n\t 2 - produto XYPK - R$ 06,00;\n\t 3 - produto KLMP - R$ 03,20;\n\t 4 - produto QRST - R$ 02.50;\n\t");
    printf("\n digite um produto: \n");
    int qtd,opcao;
    float total;
    scanf("%d",&opcao);
    if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4){
        printf("digite uma quantidade\n");
        scanf("%i",&qtd);
        if (opcao == 1){
            total = qtd * 5.30;
            printf("O total foi %.2f",total);
        }
        else if (opcao == 2){
            total = qtd * 06.00;
            printf("O total foi %.2f",total);
        }
        else if(opcao == 3){
            total = qtd * 3.20;
            printf("O total foi %.2f",total);
        }
        else if(opcao == 4){
            total = qtd * 2.50;
            printf("O total foi %.2f",total);
        }
    }
    else{
        printf("digite um codigo valido");
    }
    return 0;
}
