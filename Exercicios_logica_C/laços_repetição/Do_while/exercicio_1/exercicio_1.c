#include <stdio.h>
#include <stdlib.h>
main(){
    int cont,index,result;
    cont = 0;
    printf("digite um numero:\n");
    scanf("%i",&index);
    system("cls");
   do{
        result = index*cont;
        printf("%i x %i = %i\n",index,cont,result);
        cont++;
    } while (cont<=10);
    return 0;
}