#include <stdio.h>
#include<stdlib.h>
int main(){
    int cont,cont2;
    cont = 1;
    cont2 = 0;
    do{
        printf("%i + ", cont);
        cont2 = cont2+cont;
        cont++;
    }while (cont <= 100 );
    printf("= %i",cont2);
    return 0;
}
