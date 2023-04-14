#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor;
    printf("insira o vlor: \n");
    scanf("%i",&valor);
    if (valor>1 && valor<9){
        printf( "O valor esta nafaixa permitida");
    }
    else{
        printf("O valor informado nao pertence a faixa de 1 a 9");
    }
    
    return 0;
}
