#include<stdio.h>
#include<stdlib.h>
/*
Leandro Rodigues Carneiro
Gustavo Batista de Souza
*/
int main(){
    float areaParede,areaJanelas,areaTotal,quantidadeTijolos,precoTijolos;
    int existe,tijolos,numeroParedes,numeroJanelas;
    printf("Esse programa aceita quatro paredes com medidas diferentes.\nQuantas paredes tem com medidas diferentes: \n");
    scanf("%d",&numeroParedes);
    if (numeroParedes==1){
        float altura,comprimento;
        printf("insira a medida do comprimento da parede em metros: \n");
        scanf("%f",&comprimento);
        printf("\ninsira a medida da altura da parede em metros: \n");
        scanf("%f",&altura);
        if (comprimento > 0 && altura > 0){
            areaParede = comprimento * altura;
        }else{
            printf("Os valores nao podem ser 0\n");
            system("pause");
            return 0;
        }
        
    }else if (numeroParedes==2){
        float altura,comprimento,altura2,comprimento2;
        printf("insira a medida do comprimento da parede em metros: \n");
        scanf("%f",&comprimento);
        printf("\ninsira a medida da altura da parede em metros: \n");
        scanf("%f",&altura);
        printf("insira a medida do comprimento da parede 2 em metros: \n");
        scanf("%f",&comprimento2);
        printf("\ninsira a medida da altura da parede 2 em metros: \n");
        scanf("%f",&altura2); 
        if (comprimento > 0 && altura > 0 && comprimento2 > 0 && altura2 > 0){
            areaParede = (comprimento * altura)+(comprimento2 * altura2);
        }else{
            printf("Os valores nao podem ser 0\n");
            system("pause");
            return 0;
        }
    }else if (numeroParedes==3){
        float altura,comprimento,altura2,comprimento2,altura3,comprimento3;
        printf("insira a medida do comprimento da parede em metros: \n");
        scanf("%f",&comprimento);
        printf("\ninsira a medida da altura da parede em metros: \n");
        scanf("%f",&altura);
        printf("insira a medida do comprimento da parede 2 em metros: \n");
        scanf("%f",&comprimento2);
        printf("\ninsira a medida da altura da parede 2 em metros: \n");
        scanf("%f",&altura2);
        printf("insira a medida do comprimento da parede 3 em metros: \n");
        scanf("%f",&comprimento3);
        printf("\ninsira a medida da altura da parede 3 em metros: \n");
        scanf("%f",&altura3);
        if (comprimento > 0 && altura > 0 && comprimento2 > 0 && altura2 > 0 && comprimento3 > 0 && altura3 > 0){
            areaParede = (comprimento * altura) + (comprimento2 * altura2) + (comprimento3 * altura3);
        }else{
            printf("Os valores nao podem ser 0\n");
            system("pause");
            return 0;
        }
    }else if (numeroParedes==4){
        float altura,comprimento,altura2,comprimento2,altura3,comprimento3,altura4,comprimento4;
        printf("insira a medida do comprimento da parede em metros: \n");
        scanf("%f",&comprimento);
        printf("\ninsira a medida da altura da parede em metros: \n");
        scanf("%f",&altura);
        printf("insira a medida do comprimento da parede 2 em metros: \n");
        scanf("%f",&comprimento2);
        printf("\ninsira a medida da altura da parede 2 em metros: \n");
        scanf("%f",&altura2);
        printf("insira a medida do comprimento da parede 3 em metros: \n");
        scanf("%f",&comprimento3);
        printf("\ninsira a medida da altura da parede 3 em metros: \n");
        scanf("%f",&altura3);
        printf("insira a medida do comprimento da parede 4 em metros: \n");
        scanf("%f",&comprimento4);
        printf("\ninsira a medida da altura da parede 4 em metros: \n");
        scanf("%f",&altura4);
        if (comprimento > 0 && altura > 0 && comprimento2 > 0 && altura2 > 0 && comprimento3 > 0 && altura3 > 0 && comprimento4 > 0 && altura4 >0){
            areaParede = (comprimento * altura) + (comprimento2 * altura2) + (comprimento3 * altura3) + (comprimento4 * altura4);
        }else{
            printf("Os valores nao podem ser 0\n");
            system("pause");
            return 0;
        }
    }else{
        printf("esse programa calcula ate quatro paredes com medidas diferentes\n");
        system("pause");
        return 0;
    }
    system("cls");
    printf("\nexistem janelas ou portas insira 1 para sim e 0 para nao:\n");
    scanf("%d",&existe);
    if (existe == 1){
        printf("Esse programa aceita quatro janelas ou portas com medidas diferentes.\nQuantas janelas ou portas tem com medidas diferentes: \n");
        scanf("%d",&numeroJanelas);
        if (numeroJanelas==1){
            float altura,comprimento;
            printf("insira a medida do comprimento da janela ou porta em metros: \n");
            scanf("%f",&comprimento);
            printf("\ninsira a medida da altura da janela ou porta em metros: \n");
            scanf("%f",&altura);
            if (comprimento > 0 && altura > 0){
                areaJanelas = comprimento * altura;
            }else{
                printf("Os valores nao podem ser 0\n");
                system("pause");
                return 0;
            }
            
        }else if (numeroJanelas==2){
            float altura,comprimento,altura2,comprimento2;
            printf("insira a medida do comprimento da janela ou porta em metros: \n");
            scanf("%f",&comprimento);
            printf("\ninsira a medida da altura da janela ou porta em metros: \n");
            scanf("%f",&altura);
            printf("insira a medida do comprimento da janela ou porta 2 em metros: \n");
            scanf("%f",&comprimento2);
            printf("\ninsira a medida da altura da janela ou porta 2 em metros: \n");
            scanf("%f",&altura2); 
            if (comprimento > 0 && altura > 0 && comprimento2 > 0 && altura2 > 0){
                areaJanelas = (comprimento * altura)+(comprimento2 * altura2);
            }else{
                printf("Os valores nao podem ser 0\n");
                system("pause");
                return 0;
            }
        }else if (numeroJanelas==3){
            float altura,comprimento,altura2,comprimento2,altura3,comprimento3;
            printf("insira a medida do comprimento da janela ou porta em metros: \n");
            scanf("%f",&comprimento);
            printf("\ninsira a medida da altura da janela ou porta em metros: \n");
            scanf("%f",&altura);
            printf("insira a medida do comprimento da janela ou porta 2 em metros: \n");
            scanf("%f",&comprimento2);
            printf("\ninsira a medida da altura da janela ou porta 2 em metros: \n");
            scanf("%f",&altura2);
            printf("insira a medida do comprimento da janela ou porta 3 em metros: \n");
            scanf("%f",&comprimento3);
            printf("\ninsira a medida da altura da janela ou porta 3 em metros: \n");
            scanf("%f",&altura3);
            if (comprimento > 0 && altura > 0 && comprimento2 > 0 && altura2 > 0 && comprimento3 > 0 && altura3 > 0){
                areaJanelas = (comprimento * altura) + (comprimento2 * altura2) + (comprimento3 * altura3);
            }else{
                printf("Os valores nao podem ser 0\n");
                system("pause");
                return 0;
            }
        }else if (numeroJanelas==4){
            float altura,comprimento,altura2,comprimento2,altura3,comprimento3,altura4,comprimento4;
            printf("insira a medida do comprimento da janela ou porta em metros: \n");
            scanf("%f",&comprimento);
            printf("\ninsira a medida da altura da janela ou porta em metros: \n");
            scanf("%f",&altura);
            printf("insira a medida do comprimento da janela ou porta 2 em metros: \n");
            scanf("%f",&comprimento2);
            printf("\ninsira a medida da altura da janela ou porta 2 em metros: \n");
            scanf("%f",&altura2);
            printf("insira a medida do comprimento da janela ou porta 3 em metros: \n");
            scanf("%f",&comprimento3);
            printf("\ninsira a medida da altura da janela ou porta 3 em metros: \n");
            scanf("%f",&altura3);
            printf("insira a medida do comprimento da janela ou porta 4 em metros: \n");
            scanf("%f",&comprimento4);
            printf("\ninsira a medida da altura da janela ou porta 4 em metros: \n");
            scanf("%f",&altura4);
            if (comprimento > 0 && altura > 0 && comprimento2 > 0 && altura2 > 0 && comprimento3 > 0 && altura3 > 0 && comprimento4 > 0 && altura4 >0){
                areaJanelas = (comprimento * altura) + (comprimento2 * altura2) + (comprimento3 * altura3) + (comprimento4 * altura4);
            }else{
                printf("Os valores nao podem ser 0\n");
                system("pause");
                return 0;
            }
        }else{
            printf("esse programa calcula ate quatro janelas ou portas com medidas diferentes\n");
            system("pause");
            return 0;
        }
        if (areaJanelas >= areaParede){
        printf("\nA area de janelas e maior ou igual que a area de paredes\n");
        system("pause");
        return 0;
        }else{
            areaTotal = areaParede - areaJanelas;
        }
    }else{
        areaTotal = areaParede;
    }
    system("cls");
    printf("A area total e %.2f\n",areaTotal);
    printf("\nselecione o tipo de bloco que deseja usar\n");
    printf("\n\t1 - Bloco de concreto;\n\t2 - Bloco ceramico (Tijolo Baiano) em pe;\n\t3 - Bloco ceramico (Tijolo Baiano) em deitado;\n\t4 - tijolo comum macico com 10cm de largura;\n\t5 - tijolo comum macico com 20cm de largura;\n");
        scanf("%d",&tijolos);
        switch (tijolos){
        case 1:
            quantidadeTijolos = (areaTotal * 12.5 * 110)/100;
            printf("vai ser usado %.2f blocos",quantidadeTijolos); 
            precoTijolos = quantidadeTijolos * 3.19;
            printf("\nVai custar R$ %.2f\n",precoTijolos);
            break;
        case 2:
            quantidadeTijolos = (areaTotal * 23 * 110)/100;
            printf("vai ser usado %.2f blocos",quantidadeTijolos); 
            precoTijolos = quantidadeTijolos * 1.09;
            printf("\nVai custar R$ %.2f\n",precoTijolos);
            break;
        case 3:
            quantidadeTijolos = (areaTotal * 46 * 110)/100;
            printf("vai ser usado %.2f blocos",quantidadeTijolos); 
            precoTijolos = quantidadeTijolos * 2.19;
            printf("\nVai custar R$ %.2f\n",precoTijolos);
            break;
        case 4:
            quantidadeTijolos = (areaTotal * 92 * 110)/100;
            printf("vai ser usado %.2f blocos",quantidadeTijolos); 
            precoTijolos = quantidadeTijolos * 1.76;
            printf("\nVai custar R$ %.2f\n",precoTijolos);
            break;
        case 5:
            quantidadeTijolos = (areaTotal * 184 * 110)/100;
            printf("vai ser usado %.2f blocos",quantidadeTijolos); 
            precoTijolos = quantidadeTijolos * 1.76;
            printf("\nVai custar R$ %.2f\n",precoTijolos);
            break;
        default:
            printf("digite um codigo valido\n");
            break;
        }
    system("pause");
    return 0;

    /*
    blocos de concreto https://www.leroymerlin.com.br/bloco-de-concreto-vedacao-vazado-9x19x39cm-jcrb_89249412?region=grande_sao_paulo&gclid=CjwKCAjwsfuYBhAZEiwA5a6CDM6onIVDsPWZKXQteie-fYaV_Zs_-jvNLk_AI1NaMocUsVmVjpNIhRoC_i4QAvD_BwE
    tijolos baianos em pe https://www.leroymerlin.com.br/bloco-ceramico-vedacao-9x19x19cm-ceramica-nova-conquista_89247186?region=grande_sao_paulo&gclid=CjwKCAjwsfuYBhAZEiwA5a6CDCpaIxgaHxA2vDteDwbzQLjAhCchsQAklBSGb3exDH1oML7ImhEh_xoCo9AQAvD_BwE
    tijolos bainaos deitados https://www.leroymerlin.com.br/bloco-ceramico-vedacao-14x19x29cm-ceramica-nova-conquista_89247214?region=grande_sao_paulo&gclid=CjwKCAjwsfuYBhAZEiwA5a6CDOLqmoxdsqxZ2G3rajiBW23bRj1Rmo_o8d26Hbj6hcZGeQok6he_bhoCkW0QAvD_BwE
    tijolos macicos 10cm https://www.leroymerlin.com.br/tijolo-aparente-reto-vermelho-10,2cmx5,2cmx22,2cm-bauth_86056600?region=grande_sao_paulo&gclid=CjwKCAjwsfuYBhAZEiwA5a6CDHs3WNR1R2yQYyjdYuw4Big5PResBQdd-VdjfseuPBahYuWsttpz0xoC5q4QAvD_BwE
    tijolos macicos 20cm https://www.leroymerlin.com.br/tijolo-aparente-reto-vermelho-10,2cmx5,2cmx22,2cm-bauth_86056600?region=grande_sao_paulo&gclid=CjwKCAjwsfuYBhAZEiwA5a6CDHs3WNR1R2yQYyjdYuw4Big5PResBQdd-VdjfseuPBahYuWsttpz0xoC5q4QAvD_BwE
    */
}   
        
