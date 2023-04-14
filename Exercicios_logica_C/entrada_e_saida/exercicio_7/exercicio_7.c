#include <stdio.h>
#include <stdlib.h>
int main(){
    float volume,comprimento,altura,largura;
    printf("insira a altura de uma caixa retandular");
    scanf("%f",&altura);
    printf("insira a comprimento de uma caixa retandular");
    scanf("%f",&comprimento);
    printf("insira a largura de uma caixa retandular");
    scanf("%f",&largura);

    volume = comprimento*largura*altura;
    printf("O volume da caixa e: %2.f",volume);
    return 0;
}
