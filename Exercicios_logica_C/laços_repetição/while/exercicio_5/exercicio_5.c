#include<stdio.h>
#include<stdlib.h>
int main(){
    int valor,maior,menor,cont;
    valor = 0;
    menor = 0;
    maior = 0;
    cont = 0;
    while(valor>=0){
        printf("digite um valor:\n");
        scanf("%i",&valor);
        
        if (cont == 0){
            menor = valor;
            maior = valor;
            cont ++;
        }
        
        if(valor > maior){
			maior = valor;
		}
		if(valor < menor && valor >= 0){
			menor = valor;
		}
    }
    system("cls");
    printf("o valor maior e: %i\no valor menor e: %i",maior,menor);
    
    return 0;
}
