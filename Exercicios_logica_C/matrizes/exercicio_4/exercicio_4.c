#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct login{
    char nome[120],sexo[1],endereco[120],email[120],senha[15],cpf[11];
    int idade;
}login;

int main(){
    login lista_logins[50];
    int tamanho = 0;
    cadastrar(lista_logins,tamanho);
    
}
void cadastrar(login lista_logins[],int tamanho){
    login aux,verifica;
    char pass_verifica[15],correto = 'n';
    int index = 0,final = tamanho;
    printf("digite seu nome: \n");
    gets(aux.nome);
    fflush(stdin);
    do{
        printf("digite seu sexo M para masculino ou F para feminino: \n");
        gets(aux.sexo);
        fflush(stdin);
        if(aux.sexo == 'm'||aux.sexo=='M'||aux.sexo=='f'||aux.sexo=='F'){
            printf("digite um valor permitido");
            system("pause");
            system("cls");
        }
    } while (aux.sexo == 'm'||aux.sexo=='M'||aux.sexo=='f'||aux.sexo=='F');
    do{
        printf("digite sua idade: \n");
        scanf("%i",&aux.idade);
        fflush(stdin);
        if(aux.idade<=0){
            printf("nao pode ter idade menor que 1\n");
            system("pause");
            system("cls");
        }
    } while (aux.idade<=0);
    printf("digite seu endereco: \n");
    gets(aux.endereco);
    fflush(stdin);
    do{
        printf("digite seu cpf:\n");
        gets(aux.cpf);
        fflush(stdin);
        if (strlen(aux.cpf)>11||strlen(aux.cpf)<11){
            printf("um cpf tem 11 digitos\n");
            system("pause");
            system("cls");
        }
    } while (strlen(aux.cpf)>11||strlen(aux.cpf)<11);
    printf("digite seu email:\n");
    gets(aux.email);
    fflush(stdin);
    printf("Digite sua senha: \n");
    gets(aux.senha);
    fflush(stdin);
    do{
        printf("Confirme sua senha: \n");
        gets(pass_verifica);
        fflush(stdin);
        if(!(strcmp(aux.senha,pass_verifica)==0)){
            printf("as senhas sao diferentes\n");
            system("pause");
            system("cls");
        }
    } while (!(strcmp(aux.senha,pass_verifica)==0));
    system("cls");

    printf("digite seu email:\n");
    gets(verifica.email);
    fflush(stdin);
    printf("Digite sua senha: \n");
    gets(verifica.senha);
    fflush(stdin);
    for (index = 0; index <= final; index++){
        if(strcmp(verifica.email,aux.email)==0&&strcmp(verifica.senha,aux.senha)==0){
                printf("cadastro realizado");  
        }else{
                printf("houve um erro");
        }
    }
    fflush(stdin);
    getchar();
    system("cls");
    return;
}
