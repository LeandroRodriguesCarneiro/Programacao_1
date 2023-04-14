#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor1,valor2,valor3,valor4,resto;
    printf("insira o valor 1\n");
    scanf("%i",&valor1);
    printf("insira o valor 2\n");
    scanf("%i",&valor2);
    printf("insira o valor 3\n");
    scanf("%i",&valor3);
    printf("insira o valor 4\n");
    scanf("%i",&valor4);
    if (valor1 % 2  == 0 || valor1 % 3 == 0){
        printf("%i\n",valor1);
        if (valor2 % 2  == 0 || valor2 % 3 == 0){
           printf("%i\n",valor2);
           if (valor3 % 2  == 0 || valor3 % 3 == 0){
            printf("%i\n",valor3);
            if (valor4 % 2 == 0 || valor4 % 4 == 0){
                printf("%i\n",valor4);
            }
           }
        }
        if (valor3 % 2  == 0 || valor3 % 3 == 0){
            printf("%i\n",valor3);
            if (valor4 % 2 == 0 || valor4 % 4 == 0){
                printf("%i\n",valor4);
            }
        }
        if (valor4 % 2 == 0 || valor4 % 4 == 0){
            printf("%i\n",valor4);
        }
    }
    else if (valor2 % 2  == 0 || valor2 % 3 == 0){
        printf("%i\n",valor2);
        if (valor3 % 3  == 0 || valor3 % 3 == 0){
           printf("%i\n",valor3);
           if (valor4 % 2  == 0 || valor4 % 3 == 0){
            printf("%i\n",valor4);
           }
        }
        if (valor3 % 2  == 0 || valor3 % 3 == 0){
            printf("%i\n",valor3);
            if (valor4 % 2 == 0 || valor4 % 4 == 0){
                printf("%i\n",valor4);
            }
        if (valor4 % 2 == 0 || valor4 % 4 == 0){
            printf("%i\n",valor4);
        }
    }
    } 
    else if (valor3 % 2  == 0 || valor3 % 3 == 0){
        printf("%i\n",valor3);
        if (valor4 % 2  == 0 || valor4 % 3 == 0){
           printf("%i\n",valor4);
        }
    }
    else if (valor4 % 2  == 0 || valor4 % 3 == 0){
        printf("%i\n",valor4);
    }
    else{
        printf("nenhum numero e divisivel por 2 e 3");
    }
    return 0;
}