#include<stdio.h>
#include<stdlib.h>
int main(){
    float media_saldo;
    printf("qual a media  de saldo no ultimo ano?\n");
    scanf("%f",&media_saldo);
    if (media_saldo <= 200){
        printf("nenhum credito aprovado");
    }
    else if (media_saldo >= 201 && media_saldo <= 400){
        puts("20% do valor do saldo medio");
    }
    else if (media_saldo >= 401 && media_saldo <= 600){
        puts("30% do valor do saldo medio");
    }
    else if(media_saldo > 601){
        puts("40% do valor do saldo medio");
    }
    
    
    return 0;
}
