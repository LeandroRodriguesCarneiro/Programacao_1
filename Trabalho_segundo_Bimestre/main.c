#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//Joao Vitos Asevedo,Felipe Souza,Ruan Lisboa,Leandro Rodrigues 

typedef struct TFuncionario {
    char nome_funcionario[256],Cargo[20];
    int numero_registro,nivel_salarial,tempo_trabalho;
    float Valor_hora,Debitos_cantina;
} Tfuncionario;

const int MAX = 5;

int main(){
    Tfuncionario funcionarios[MAX];
    int opcao,tamanho = 0;
    do{
        printf("1 - Cadastrar\n2 - Relatorio Geral\n3 - Relatorio por nivel de salario\n4 - Custo mensal dos funcionarios para o imperio\n0 - sair\n");
        scanf("%i",&opcao);
        fflush(stdin);
        system("cls");
        switch (opcao){
        case 0:{
            printf("Obrigado por usar nosso sistema\n");
            printf("'A sua falta de fe e perturbadora'\n    Darth Vader\n");
            system("pause");
            exit(0);
            break;
        }
        case 1:{
            cadastrar(funcionarios,&tamanho);
            break;
        }
        case 2:{
            relatorio_geral(funcionarios,tamanho);
            break;
        }    
        case 3:{
            relatorio_salario(funcionarios,tamanho);
            break;
        }
        case 4:{
            Custos_imperio(funcionarios,tamanho);
            break;
        }
        
        default:
            printf("digite uma opcao valida\n");
            system("pause");
            system("cls");
            break;
        }
    }while(opcao!=0);
    return 0;
}

void cadastrar(Tfuncionario funcionarios[],int *tamanho){
    if(tamanho == MAX){
        printf("Memoria cheia");
        return;
    }
    Tfuncionario aux;
    char correto = 'N';
    do{
        printf("Insira o codigo do funcionario:\n");
        scanf("%i",&aux.numero_registro);
        fflush(stdin);
        if (aux.numero_registro<0){
            printf("numero de registro precisa ser maior que 0");
            system("cls");
            system("pause");
        }
    }while (aux.numero_registro<=0);
    printf("Insira o Nome:\n");
    gets(aux.nome_funcionario);
    fflush(stdin);
    printf("Insira o Cargo:\n");
    gets(aux.Cargo);
    fflush(stdin);
    int opc;
    do{  
        printf("Insira o nivem salarial desejado:\n");
        printf("1 - nivel salarial baixo\n2 - nivel salarial intermediario\n3 - nivel salarial alto\n");
        scanf("%i",&opc);
        fflush(stdin);
        switch (opc){
        case 1:{
            aux.nivel_salarial = 1;
            break;
            }
        case 2:{
            aux.nivel_salarial = 2;
            break;
            }
        case 3:{
            aux.nivel_salarial = 3;
            break;
            }
        default:{
            printf("Insira uma opcao valida\n");
            system("pause");
            system("cls");
            break;
            }
        }
    } while (opc <= 0 || opc >3);
    do{
        printf("Quntas horas de trabalho:\n");
        scanf("%i",&aux.tempo_trabalho);
        fflush(stdin);
    } while (aux.tempo_trabalho<=0);
    do{
        printf("Qual o valor da hora de trabalho:\n");
        scanf("%f",&aux.Valor_hora);
        fflush(stdin);
    } while (aux.Valor_hora<=0);
    do{
        printf("Qual os debitos da cantina:\n");
        scanf("%f",&aux.Debitos_cantina);
        fflush(stdin);
    } while (aux.Debitos_cantina<=0);
    system("cls");
    printf("Numero de registro: %i\n",aux.numero_registro);
    printf("Nome do funcionario: %s\n",aux.nome_funcionario);
    printf("Cargo: %s\n",aux.Cargo);
    printf("Nivel de salario: %i\n",aux.nivel_salarial);
    printf("Tempo de trabalho: %i\n",aux.tempo_trabalho);
    printf("Valor da hora de trabalho: %.2f\n",aux.Valor_hora);
    printf("Valor devido na cantina: %.2f\n",aux.Debitos_cantina);
    printf ("Os dados estao corretos?(S/N)\n");
    scanf("%c",&correto);
    fflush(stdin);
    if (correto=='s'||correto=='S'){
        funcionarios [*tamanho] = aux;// faz a transferência
        (*tamanho) ++;
        printf ("\tO produto foi incluido!\n");
        fflush(stdin);
    }
    printf("\tAPERTE ENTER PARA VOLTAR AO MENU");
    fflush(stdin);
    getchar();
    fflush(stdin);
    system("cls");
    return;
}

void apresentar(Tfuncionario funcionarios[],int chave){
    printf("==============================================================\n");
    printf("Numero de registro: %i\n",funcionarios[chave].numero_registro);
    printf("Nome do funcionario: %s\n",funcionarios[chave].nome_funcionario);
    printf("Cargo: %s\n",funcionarios[chave].Cargo);
    printf("Nivel de salario: %i\n",funcionarios[chave].nivel_salarial);
    printf("Tempo de trabalho: %iHrs\n",funcionarios[chave].tempo_trabalho);
    printf("Valor da hora de trabalho: R$%.2f\n",funcionarios[chave].Valor_hora);
    printf("Valor devido na cantina: R$%.2f\n",funcionarios[chave].Debitos_cantina);
    printf("______________________________________________________________\n");
    return;
}

void relatorio_geral(Tfuncionario funcionarios[],int tamanho){
    for (int i = 0; i < tamanho; i++){
        apresentar(funcionarios,i);
    }
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    fflush(stdin);
    system("cls");
    return;
}

void relatorio_salario(Tfuncionario funcionarios[],int tamanho){
    int opc,encontrou = 0;
    do{  
        printf("Insira o nivem salarial desejado:\n");
        printf("1 - nivel salarial baixo\n2 - nivel salarial intermediario\n3 - nivel salarial alto\n");
        scanf("%i",&opc);
        fflush(stdin);
        switch (opc){
        case 1:{
            for (int i = 0; i < tamanho; i++){
                if(funcionarios[i].nivel_salarial == 1){
                    apresentar(funcionarios,i);
                    encontrou = 1;
                }
            }
            break;
            }
        case 2:{
            for (int i = 0; i < tamanho; i++){
                if(funcionarios[i].nivel_salarial == 2){
                    apresentar(funcionarios,i);
                    encontrou = 1;
                }
            }
            break;
            }
        case 3:{
            for (int i = 0; i < tamanho; i++){
                if(funcionarios[i].nivel_salarial == 3){
                    apresentar(funcionarios,i);
                    encontrou = 1;
                }
            }
            break;
            }
        default:{
            printf("Insira uma opcao valida\n");
            system("pause");
            system("cls");
            break;
            }
        }
    } while (opc <= 0 || opc >3);
    if(encontrou == 0){
        printf("Nao foi encontrado nunhum registro conforme a busca\n");
    }
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    fflush(stdin);
    system("cls");
    return;
}

void Custos_imperio(Tfuncionario funcionarios[],int tamanho){
    float gastos_funcionarios,salario_funcionario = 0,cantina_funcionarios = 0;
    for(int i = 0; i < tamanho; i++){
        salario_funcionario = salario_funcionario + (funcionarios[i].Valor_hora * funcionarios[i].tempo_trabalho);
        cantina_funcionarios = cantina_funcionarios + funcionarios[i].Debitos_cantina;
    }
    gastos_funcionarios = (salario_funcionario + cantina_funcionarios)*(-1);
    printf("Os gastos com salario: R$%.2f\n",salario_funcionario);
    printf("Os gastos com cantina: R$%.2f\n",cantina_funcionarios);
    printf("O total: R$%.2f\n",gastos_funcionarios);
    printf("APERTE ENTER PARA VOLTAR AO MENU");
    getchar();
    fflush(stdin);
    system("cls");
    return;
}