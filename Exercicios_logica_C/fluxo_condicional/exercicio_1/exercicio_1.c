#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor;
    printf("insira um valor\n");
    scanf("%i",&valor);
    if (valor<=0){
        valor = valor*(-1);
    }
    printf("%i",valor);
    return 0;
}
