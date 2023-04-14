#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor1,valor2,valor3,temporaria;
    printf("insira o valor 1\n");
    scanf("%i",&valor1);
    printf("insira o valor 2\n");
    scanf("%i",&valor2);
    printf("insira o valor 3\n");
    scanf("%i",&valor3);
    if (valor1 > valor2 && valor1 > valor3){
        if(valor2 > valor3){
            temporaria = valor1;
            valor1 = valor3;
            temporaria = valor3;
            printf("a ordem ficou : %i,%i,%i",valor1,valor2,valor3);
        }
        else if(valor3 > valor2){
            temporaria = valor1;
            valor1 = valor2;
            valor2 = valor3;
            valor3 = temporaria;
            printf("a ordem ficou : %i,%i,%i",valor1,valor2,valor3);
        }
    }
    else if (valor2 > valor1 && valor2 > valor3){
        if (valor1 > valor3){
            temporaria = valor2;
            valor2 = valor1;
            valor1 = valor3;
            valor3 = temporaria;
            printf("a ordem ficou : %i,%i,%i",valor1,valor2,valor3);
        }
        else if (valor3 > valor1){
            temporaria = valor2;
            valor2 = valor3;
            valor3 = temporaria; 
            printf("a ordem ficou : %i,%i,%i",valor1,valor2,valor3);
        }
    }
    else{
        if (valor1 > valor2){
            temporaria = valor1;
            valor1 = valor2;
            valor2 = temporaria;
            printf("a ordem ficou : %i,%i,%i",valor1,valor2,valor3);
        }
        else if (valor2 > valor1){
            printf("a ordem ficou : %i,%i,%i",valor1,valor2,valor3);
        }
    }
    
    
}