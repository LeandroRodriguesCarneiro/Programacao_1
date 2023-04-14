#include<stdio.h>
#include<stdlib.h>
int main(){
    float nota1,nota2,nota3,nota4,media,exame;
    printf("insira a nota1\n");
    scanf("%f",&nota1);
    printf("insira a nota2\n");
    scanf("%f",&nota2);
    printf("insira a nota3\n");
    scanf("%f",&nota3);
    printf("insira a nota4\n");
    scanf("%f",&nota4);
    media = (nota1+nota2+nota3+nota4)/4;
    if (media>=7){
        printf("O aluno foi aprovado com: %.2f de media",media);
    }else{
        printf("insira a nota do exame do aluno:\n");
        scanf("%f",&exame);
        if (exame>=5){
            printf("O aluno foi aprovado por exame: %.2f",exame);
        }else{
            printf("O aluno foi reprovado por exame: %.2f",exame);
        }
        
    }
    return 0;
}