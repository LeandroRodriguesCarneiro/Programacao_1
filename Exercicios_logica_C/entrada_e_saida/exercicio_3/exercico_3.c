#include<stdio.h>
#include<stdlib.h>
int main(){
    float volume,raio,altura;
    printf("insira a altura da lata de oleo");
    scanf("%f",&altura);
    printf("insira o raio da lata de oleo");
    scanf("%f",&raio);
    volume  = 3.14*raio*raio*altura;
    printf("O resultado foi: \n%.2f",volume);
    return 0;
}
