#include<stdio.h>
#include<stdlib.h>
int main(){
    float tempo,velocidade_media,distancia,litros;
    printf("insira o tempo gasto durante a vigem em horas");
    scanf("%f",&tempo);
    printf("insira a velocidade mdia usada no percurso da viagem");
    scanf("%f",&velocidade_media);
    distancia = tempo * velocidade_media;
    litros = distancia / 12;
    printf("nessa viagem voce gastou: %.2f Litros",litros);
    return 0;
}
