#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor;
    printf("insira um valor: \n");
    scanf("%i",&valor);
    if(!(valor<3)){
        printf("valor e: %i",valor);
    }
    return 0;
}
