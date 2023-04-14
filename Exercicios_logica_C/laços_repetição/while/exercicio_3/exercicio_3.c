#include<stdio.h>
#include<stdlib.h>
int main(){
    int cont = 0;
    while (cont <= 20){
        if(cont % 2){
            printf("%i,",cont);
        }
        cont++;
    }
    return 0;
}
