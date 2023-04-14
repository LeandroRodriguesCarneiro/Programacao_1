#include<stdio.h>
#include<stdlib.h>
int main(){
    char nome[21],sexo;
    printf("insira M se seu sexo for masculino e F se seu sexo for feminino: \n");
    scanf("%c",&sexo);
    printf("insira seu nome: \n");
    scanf("%s",&nome);
    
    if (sexo == 'M' || sexo == 'm'){
        printf("Ilmo. Sr. %s",nome);
    }
    if(sexo == 'F' || sexo == 'f'){
        printf("Ilma. Sra. %s",nome);
    }
    

    return 0;
}
