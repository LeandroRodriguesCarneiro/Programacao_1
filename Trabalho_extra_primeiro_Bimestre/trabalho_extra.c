#include <stdio.h>
#include <stdlib.h>
void triangulo_pitagoras(){
    for (int i = 0; i <= 5; i++){
        printf("\n");
        for (int j = 0; j < i; j++){
            printf("* ");
        }   
    }
    printf("\n");
    system("pause");
}
void triangulo_pitagoras_invertido(){
    for (int i = 0; i <= 5; i++){
        printf("\n");
        for (int j = 5; j > i; j--){
            printf("* ");
        }   
    }
    printf("\n");
    system("pause");
}
void triangulo_pitagoras_contador(){
    for (int i = 0; i <= 5; i++){
        printf("\n");
        for (int j = 1; j <= i; j++){
            printf("%i ",j);
        }   
    }
    printf("\n");
    system("pause");
}
void triangulo_pitagoras_1(){
    for (int i = 1; i <= 5; i++){
        printf("\n");
        for (int j = 0; j < i; j++){
            printf("1 ");
        }   
    }
    printf("\n");
    system("pause");
}
void triangulo_pitagoras_contador_2(){
    int cont = 0;
    for (int i = 0; i <= 5; i++){
        printf("\n");
        for (int j = 0; j < i; j++){
            printf("%i ",i);
        }   
    }
    printf("\n");
    system("pause");
}
void quadrado_contador(){//funcao do tipo vazia que realiza  o exemplo 1
	for(int i=0; i< 5; i++){
		printf("\n");
        int cont = 1;
		for (int j=0; j<5; j++){
			printf("%i ",cont);
            cont++;
        }
	}
	printf("\n");
	system("pause");
}

void reta(){//funcao do tipo vazia que realiza  o exemplo 1
	for(int i=0; i< 5; i++)
		printf("* ");
	printf("\n");
	system("pause");
}

void coluna(){//funcao do tipo vazia que realiza  o exemplo 1
	for(int i=0; i< 5; i++)
		printf("\n* ");
	printf("\n");
	system("pause");
}

void quadrado(){//funcao do tipo vazia que realiza  o exemplo 1
	for(int i=0; i< 5; i++){
		printf("\n");
		for (int j=0; j<5; j++)
			printf("* ");
	}
	printf("\n");
	system("pause");
}
void Menu(){
	int opc;
	do{
		printf("----- MENU-----\n");
        printf("triangulo de pitagoras asterisco - 1\n");
        printf("triangulo de pitagoras invertido - 2\n");
        printf("triangulo de pitagoras contador - 3\n");
        printf("triangulo de pitagoras contador2 - 4\n");
        printf("triangulo de pitagoras 1 - 5\n");
        printf("quradrado contador -6\n");
		printf("reta - 7\n");
		printf("coluna - 8\n");
		printf("quadrado - 9\n");
		printf("Sair - 0\n");
		printf("Digite a opcao desejada ");
		scanf("%i", &opc);
		switch(opc){
            case 1:{
                triangulo_pitagoras();
                break;
            }
            case 2:{
                triangulo_pitagoras_invertido();
                break;
                }
            case 3:{
                triangulo_pitagoras_contador();
                break;
                }
            case 4:{
                triangulo_pitagoras_contador_2();
                break;
                }
            case 5:{
                triangulo_pitagoras_1();
                break;
                }
            case 6:{
                quadrado_contador();
                break;
                }
			case 7:{
				reta();//chamada da funcao Exemplo 1
				break;
			}
			case 8:{
				coluna();//chamada da funcao Exemplo 2
				break;
			}
			case 9:{
				quadrado();//chamada da funcão Exemplo 3
				break;
			}

			case 0:{
				exit(0);
				break;
			}
			default:{
				printf("\nValor invalido.\n");
				system("pause");	
			}
		}
		system("cls");
	}while(opc!=0);

}

int main(){
	Menu();//chamada da funcao Menu
	return 0;
}