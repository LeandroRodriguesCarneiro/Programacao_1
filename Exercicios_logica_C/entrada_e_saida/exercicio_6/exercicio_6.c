#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    printf("Insira o valor de a: \n");
    scanf("%i",&a);
    printf("Insira o valor de b: \n");
    scanf("%i",&b);
    c = a;
    a = b;
    b = c;
    printf("O valor de a: %i. \n",a);
    printf( "O valor de b: %i. \n",c);

    return 0;
}
