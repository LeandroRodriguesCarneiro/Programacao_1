#include<stdio.h>
#include<stdlib.h>
int main(){
    printf("tabela de precos\n");
    printf("-------------------------------------------------------------------\n");
    printf("\n\t produto 5 - R$ 32,00;\n\t produto 6 - R$ 45,00;\n\t produto 2 - R$ 37,00;\n\t");
    printf("\n digite um produto: \n");
    int opcao,qtd;
    float total;
    scanf("%i",&opcao);
    if (opcao == 5 || opcao == 6 || opcao == 2){
        printf("digite uma quantidade\n");
        scanf("%i",&qtd);
        if (opcao == 5){
            total = qtd * 32.00;
            printf("O total foi %.2f",total);
        }
        else if (opcao == 6){
            total = qtd * 45.00;
            printf("O total foi %.2f",total);
        }
        else if(opcao == 2){
            total = qtd * 37.00;
            printf("O total foi %.2f",total);
        }
    }
    else{
        printf("digite um codigo valido");
    }
    return 0;
}
