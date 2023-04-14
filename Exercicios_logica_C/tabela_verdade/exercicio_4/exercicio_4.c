#include<stdlib.h>
#include<stdlib.h>
int main(){
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
    return 0;
}
