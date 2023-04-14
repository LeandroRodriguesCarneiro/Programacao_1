#include<stdio.h>
#include<stdlib.h>
int main(){
    int quantidade;
    float preco;
    printf("\n\t o preco da maca e R$ 01,30\n\t se comprar uma duzia (12) macas sai por R$ 1.00\n");
    printf("digite o valor numerico da quantidade comprada:\n");
    scanf("%d",&quantidade);
    if( quantidade > 0 && quantidade < 12){
        preco = quantidade * 01.30;
        printf("vai custar R$%.2f",preco);
    }
    else if (quantidade >= 12){
        preco = quantidade * 01.00;
        printf("vai custar R$%.2f",preco);
    }
    else{
        printf("digite uma quantidade maior que zero");
    }
    
    return 0;
}
