#include <stdio.h>
#include<stdlib.h>
int main(){
    int cont,cont2;
    cont = 1;
    cont2 = 0;
    while (cont <= 100 ){
        printf("%i + ", cont);
        cont2 = cont2+cont;
        cont++;
    }
    printf("= %i",cont2);
    return 0;
}
