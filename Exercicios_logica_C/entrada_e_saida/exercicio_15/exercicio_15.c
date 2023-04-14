#include<stdio.h>
#include<stdlib.h>
int main(){
    float salario,percentual,aumento;
    printf("insira o seu salario atual \n");
    scanf("%f",&salario);
    printf("insira o seu percentual de aumento do salario \n");
    scanf("%f",&percentual);
    aumento = salario + (salario * percentual)/100;
    printf("O salario aumentou para: %2.f",aumento);
    return 0;
}
