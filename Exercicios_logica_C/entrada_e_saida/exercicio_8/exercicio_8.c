#include <stdio.h>
#include <stdlib.h>
int main(){
    int numero,quadrado;
    printf("insira o numero que sera elevado ao quadrado \n");
    scanf("%i",&numero);
    quadrado = numero * numero;
    printf("O quadadro do numero %i, e %i",numero,quadrado);
    return 0;
}
