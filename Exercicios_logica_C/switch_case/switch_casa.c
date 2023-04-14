#include<stdio.h>
#include<stdlib.h>
int main(){
    int opcao;
    printf("-----------------------------------------------------------------------------------------------------------");
    printf("\n\t1 - exercicio analisa de credito - exercicio1\n\t2 - exercicio de calculo de precos - exercicio2\n\t3 - exercicio de calculo de precos - exercicio3\n\t4 - exercicio aumento de salario - exercicio4\n\t5 - calculo de precode maca - exercicio5\n");
    printf("-----------------------------------------------------------------------------------------------------------");
    printf("\nselecione o exercicio desejado\n");
    scanf("%d",&opcao);
    system("cls");
    switch (opcao){
    case 1:{
            float media_saldo;
            printf("qual a media  de saldo no ultimo ano?\n");
            scanf("%f",&media_saldo);
            if (media_saldo <= 200){
                printf("nenhum credito aprovado");
            }
            else if (media_saldo >= 201 && media_saldo <= 400){
                puts("20% do valor do saldo medio");
            }
            else if (media_saldo >= 401 && media_saldo <= 600){
                puts("30% do valor do saldo medio");
            }
            else if(media_saldo > 601){
                puts("40% do valor do saldo medio");
            }
        break;
    }
    case 2:{
        printf("tabela de precos\n");
        printf("-------------------------------------------------------------------\n");
        printf("\n\t produto 5 - R$ 32,00;\n\t produto 6 - R$ 45,00;\n\t produto 2 - R$ 37,00;\n\t");
        printf("\n digite um produto: \n");
        int opcao,qtd;
        float total;
        scanf("%i",&opcao);
        if (opcao == 5 || opcao == 6 || opcao == 2){
            printf("digite uma quantidade\n");
            scanf("%i",&qtd);
            if (opcao == 5){
                total = qtd * 32.00;
                printf("O total foi %.2f",total);
            }
            else if (opcao == 6){
                total = qtd * 45.00;
                printf("O total foi %.2f",total);
            }
            else if(opcao == 2){
                total = qtd * 37.00;
                printf("O total foi %.2f",total);
            }
        }
        else{
            printf("digite um codigo valido");
        }
        break;
    }
    case 3:{
        printf("tabela de precos\n");
        printf("-------------------------------------------------------------------\n");
        printf("\n\t 1 - produto ABCD - R$ 05,30;\n\t 2 - produto XYPK - R$ 06,00;\n\t 3 - produto KLMP - R$ 03,20;\n\t 4 - produto QRST - R$ 02.50;\n\t");
        printf("\n digite um produto: \n");
        int qtd,opcao;
        float total;
        scanf("%d",&opcao);
        if (opcao == 1 || opcao == 2 || opcao == 3 || opcao == 4){
            printf("digite uma quantidade\n");
            scanf("%i",&qtd);
            if (opcao == 1){
                total = qtd * 5.30;
                printf("O total foi %.2f",total);
            }
            else if (opcao == 2){
                total = qtd * 06.00;
                printf("O total foi %.2f",total);
            }
            else if(opcao == 3){
                total = qtd * 3.20;
                printf("O total foi %.2f",total);
            }
            else if(opcao == 4){
                total = qtd * 2.50;
                printf("O total foi %.2f",total);
            }
        }
        else{
            printf("digite um codigo valido");
        }
            break;
    }
    case 4:{
        int codigo;
        float salario,aumento,diferenca;
        printf("tebela com os cargos");
        printf("\n\t 101 - Gerente;\n\t 102 - Engenheiro; \n\t 103 - Tecnico;\n");
        printf("digite o codigo: \n");
        scanf("%d",&codigo);
        printf("digite o salario:\n");
        scanf("%f",&salario);
        if(codigo == 101){
            aumento = salario + (salario * 10/100);
            diferenca = aumento - salario;
            printf("salario atual: %.2f\n",aumento);
            printf("salario anterior: %.2f\n",salario);
            printf("o amento foi de %.2f\n",diferenca);
        }
        else if(codigo == 102){
            aumento = salario + (salario * 20/100);
            diferenca = aumento - salario;
            printf("salario atual: %.2f\n",aumento);
            printf("salario anterior: %.2f\n",salario);
            printf("o amento foi de %.2f\n",diferenca);
        }
        else if(codigo == 103){
            aumento = salario + (salario * 30/100);
            diferenca = aumento - salario;
            printf("salario atual: %.2f\n",aumento);
            printf("salario anterior: %.2f\n",salario);
            printf("o amento foi de %.2f\n",diferenca);
        }
        else{
            aumento = salario + (salario * 40/100);
            diferenca = aumento - salario;
            printf("salario atual: %.2f\n",aumento);
            printf("salario anterior: %.2f\n",salario);
            printf("o amento foi de %.2f\n",diferenca);
        }
        break;
        }
    case 5:{
        int quantidade;
        float preco;
        printf("\n\t o preco da maca e R$ 01,30\n\t se comprar uma duzia (12) macas sai por R$ 1.00\n");
        printf("digite o valor numerico da quantidade comprada:\n");
        scanf("%d",&quantidade);
        if( quantidade > 0 && quantidade < 12){
            preco = quantidade * 01.30;
            printf("vai custar R$%.2f",preco);
        }
        else if (quantidade >= 12){
            preco = quantidade * 01.00;
            printf("vai custar R$%.2f",preco);
        }
        else{
            printf("digite uma quantidade maior que zero");
        }
        break;
    }
    default:{
        printf("digite uma opcao valida");
        break;
    }
    }
    system("pause");
    return 0;
}
