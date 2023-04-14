#include<stdio.h>
#include<stdlib.h>
int main(){
    int votos_total,qtd_votoA,qtd_votoB,qtd_votoC,qtd_votoBranco,qtd_votoNulo,votos_validos;
    float p100A,p100B,p100C,p100n,p100b;
    printf("insira a quantidade de votos do candidato A: \n");
    scanf("%i",&qtd_votoA);
    printf("insira a quantidade de votos do candidato B: \n");
    scanf("%i",&qtd_votoB);
    printf("insira a quantidade de votos do candidato C: \n");
    scanf("%i",&qtd_votoC);
    printf("insira a quantidade de votos brancos: \n");
    scanf("%i",&qtd_votoBranco);
    printf("insira a quantidade de votos nulos: \n");
    scanf("%i",&qtd_votoNulo);
    votos_total = qtd_votoA + qtd_votoB + qtd_votoC + qtd_votoBranco + qtd_votoNulo;
    printf("quantidade total de votos:%i \n",votos_total);
    p100A = (qtd_votoA * 100)/votos_total;
    printf("A porcentagem de votos para o candidato A: %.2f\n",p100A);
    p100B = (qtd_votoB * 100)/votos_total;
    printf("A porcentagem de votos para o candidato A: %.2f\n",p100B);
    p100C = (qtd_votoC * 100)/votos_total;
    printf("A porcentagem de votos para o candidato A: %.2f\n",p100C);
    p100n = (qtd_votoA * 100)/votos_total;
    printf("A porcentagem de votos para o votos brancos: %.2f\n",p100n);
    p100n = (qtd_votoA * 100)/votos_total;
    printf("A porcentagem de votos para o votos nulos: %.2f\n",p100n);
    votos_validos = qtd_votoA + qtd_votoB + qtd_votoC;
    printf("quantidade votos validos:%i \n",votos_validos);
    return 0;
}
