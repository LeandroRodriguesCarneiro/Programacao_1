#include <stdio.h>
#include <stdlib.h>
//Leandro Rodrigues Carneiro
/* Definições, para facilitar o uso da função para desenhar o mapa */
#define CHAO 0
#define PAREDE 1
#define VOCE 2
#define GRAMA 3
#define OUTRA_COISA 4
/* Definições que eu uso em quase todos os meus códigos :) */
#define OK 1
#define ERRO 2

#define LIMPARTELA "cls"
int    coluna_atual = 2, linha_atual = 2;

/* O Mapa */
//aumentei o mapa
int mapa[30][15] = { 
1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,1,0,0,0,1,0,0,1,
1,0,0,0,0,1,1,1,0,0,0,1,1,0,1,
1,0,0,0,0,3,0,0,0,0,0,1,0,0,1,
1,0,0,1,3,3,3,0,0,0,0,0,0,0,1,
1,0,0,0,0,1,0,0,0,0,0,0,1,1,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,
1,1,1,4,4,4,4,1,0,0,0,0,1,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,
1,0,0,0,0,1,1,1,0,0,0,0,1,0,1,
1,0,0,0,0,3,0,0,0,0,0,0,0,0,1,
1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,
1,0,0,0,0,0,0,1,0,0,0,1,0,0,1,
1,0,0,0,0,1,1,1,0,0,0,1,1,0,1,
1,0,0,0,0,3,0,0,0,0,0,1,0,0,1,
1,0,0,1,3,3,3,0,0,0,0,0,0,0,1,
1,0,0,0,0,1,0,0,0,0,0,0,1,1,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,
1,1,1,4,4,4,4,1,0,0,0,0,1,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,
1,0,0,0,0,0,0,0,0,0,0,0,1,1,1,
1,1,1,1,1,1,0,0,0,0,0,0,0,1,1,
1,0,0,0,0,1,1,1,0,0,0,0,1,0,1,
1,0,0,0,0,3,0,0,0,0,0,0,0,0,1,
1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,
};

/* Função para desenhar o Mapa */
int desenhar_mapa(){
   
   int linha,coluna;
   for (linha=0;linha<30;linha++) {
   	printf("\t\t\t\t");
      for (coluna=0;coluna<15;coluna++) {
         if ((linha == linha_atual) && (coluna == coluna_atual)) {
            printf("P");
            continue;
         }
         if (mapa[linha][coluna] == CHAO)
            printf(" ");
         if (mapa[linha][coluna] == PAREDE)
            printf("|");
         if (mapa[linha][coluna] == GRAMA)
            printf("v");
         if (mapa[linha][coluna] == OUTRA_COISA)
            printf("+");
      }
      printf("\n");
   }
   return OK;
}

int jogar(){
   char movimento;
   while ((movimento != 'x') && (movimento != 'X')) {
      system(LIMPARTELA);
      desenhar_mapa();
      //alterei as direcoes pra ficar mais facil de jogar
      printf("\n\n   (W)\n(D)(X)(A)\n   (S)\n\n"); /* Imprime as direcoes */
      //coloquei uma mensagem dizendo o que cada tecla faz
      printf("\tW-para cima;\n\tS-para baixo;\n\tA-para esquerda;\n\tD-para direita;\n\tX-Para fexar;\napos precione enter:\n");
      if ((scanf("%c",&movimento))==0) {
         printf("mensagem de erro..\n");
         getchar(); getchar();
         return ERRO;
      }
      
      if ((movimento == 'W') || (movimento == 'w')) {
         linha_atual = linha_atual - 1;
         /* Se não for chao ou grama ele volta pra posicao anterior */
         if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA)) {
            linha_atual = linha_atual + 1;
            printf("\n Direcao errada\n");
            getchar(); getchar();
         }
      }
      if ((movimento == 's') || (movimento == 'S')) {
         linha_atual = linha_atual + 1;
         /* Se não for chao ou grama ele volta pra posicao anterior */
         if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA)) {
            linha_atual = linha_atual - 1;
            printf("\n Direcao errada\n");
            getchar(); getchar();
         }
      }
      if ((movimento == 'D') || (movimento == 'd')) {
         coluna_atual = coluna_atual + 1;
         /* Se não for chao ou grama ele volta pra posicao anterior */
         if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA)) {
            coluna_atual = coluna_atual - 1;
            printf("\n Direcao errada\n");
            getchar(); getchar();
         }
      }
      if ((movimento == 'A') || (movimento == 'a')) {
         coluna_atual = coluna_atual - 1;
         /* Se não for chao ou grama ele volta pra posicao anterior */
         if ((mapa[linha_atual][coluna_atual] != CHAO) && (mapa[linha_atual][coluna_atual] != GRAMA)) {
            coluna_atual = coluna_atual + 1;
            printf("\n Direcao errada)\n");
            getchar(); getchar();
         }
      }
      //condicao para ganhar
      if(linha_atual == 31){
        system(LIMPARTELA);
        printf("voce ganhou!!!!\n");
        system("pause");
        return 0;
      }
   }
}

int main(){
	return jogar ();
}