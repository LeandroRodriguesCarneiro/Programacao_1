#include<stdio.h>
#include<stdlib.h>
int main(){
    int cont = 0;
    do{
        if(cont % 2){
            printf("%i,",cont);
        }
        cont++;
    }while (cont <= 20);
    return 0;
}