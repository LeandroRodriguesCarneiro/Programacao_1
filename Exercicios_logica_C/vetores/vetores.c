#include <stdio.h>
int main(){
    int i;
    printf("\n\t1 - valores reais e os apresente na ordem inversa entrada\t\n");
    printf("\t2 - valores inteiros, armazeno-os em um vetor, calcule e apresente a soma destes valores\t\n");
    printf("\t3 - O menor elemento de N e, M, e sua posicao dentro do vetor e:, P\t\n");
    printf("\t4 - faca a multiplicacao dos elementos de mesmo indice, colocando o resultado em um terceiro vetor\t\n");
    printf("\t5 - vetor S[20] e uma variavel A. A seguir, mostre o produto da variavel A pelo vetor\t\n");
    printf("\t6 - e leia dois vetores de 10 posicoes e faca a multiplicacao dos elementos de mesmo indice, colocando o resultado em um terceiro vetor\t\n");
    printf("\t7 - vetor de 20 numeros. A seguir, conte quantos valores pares existem no vetor\t\n");
    printf("\t8 -  vetor de 20 posicoes e mostre-o. Em seguida, troque o primeiro elemento com o ultimo, o segundo com o penultimo, o terceiro com o antepenultimo, e assim sucessivamente. Mostre o novo vetor depois da troca.\t\n");
    printf("\t9 - Faca um programa que leia 10 numeros inteiros, armazene-os em um vetor, solicite um valor de referencia inteiro e:\t\n");
    printf("\t10 - faca um programa que leia e armazene dois vetores a e b com 5 elementos cada e apresente o resultado de:\t\n");
    printf("\ninsira a atividade que deseja:\n");
    scanf("%i",&i);
    switch (i)
    {
    case 1:{
        int A[10],i;
        printf("insira os valores: \n");
        for (i = 0; i < 10; i++){
            scanf("%i",&A[i]);
        }
        system("cls");
        for (i=0; i < 10; i++){
            printf("%i \n",A[9-i]);
        }
        break;
    }
    case 2:{
        int A[5],i,soma = 0;
        printf("insira os valores: \n");
        for (i = 0; i < 5; i++){
            scanf("%i",&A[i]);
        }
        system("cls");
        for (i=0; i < 5; i++){
            soma = soma + A[i];    
        }
        printf("%i\n",soma);
        break;
    }
    case 3:{
        int N[20],i,M,P;
        printf("insira o valor: \n");
        for (i=0;i < 20;i++){
            scanf("%i",& N[i]);
        }
        system("cls");
        M = N[1];
        for (i=0;i<20;i++){
            printf("N[%i] e : %i\n",i,N[i]);
            if (M > N[i]){
                M = N[i];
                P = i;
            }
        }
        printf("O valor menor de N e: %i, e a posicao dentro do vetor: %i",M,P);
        break;
    }
    case 4:{
        int A[10],B[10],mult[10];
        printf("insira o valor de A:\n");
        for (i = 0; i < 10; i++){
            scanf("%i",&A[i]);
        }
        printf("insira o valor de B:\n");
        for (i = 0; i < 10; i++){
            scanf("%i",&B[i]);
        }
        for (i = 0; i < 10; i++)
        {
            mult[0] = A[i] * B[i];
        }
        for (int i = 0; i < 10; i++)
        {
            printf("A multiplicacao dos vetores e: %i\n",mult[0]);
        } 
        break;
    }
    case 5:{
        int S[4],A;
        printf("digite um valor:\n");
        scanf("%i",&A);
        printf("digite um valor:\n");
        for (int i = 0; i < 20; i++){
            scanf("%i",&S[i]);
        }
        for (int i = 0; i < 19; i++){
            printf("o produto de: %i x %i = %i\n",S[i],A,(S[i]*A));
        }
        break;
    }
    case 6:{
        int A[10],B[10],mult[10];
        printf("insira o valor de A:\n");
        for (i = 0; i < 10; i++){
            scanf("%i",&A[i]);
        }
        printf("insira o valor de B:\n");
        for (i = 0; i < 10; i++){
            scanf("%i",&B[i]);
        }
        for (i = 0; i < 10; i++)
        {
            mult[0] = A[i] * B[i];
        }
        for (int i = 0; i < 10; i++)
        {
            printf("A multiplicacao dos vetores e: %i\n",mult[0]);
        } 
        break;
    }
    case 7:{
        int numeros[20],num_par;
        printf("digite os valores");
        for (int i = 0; i < 20; i++){
            scanf("%i",&numeros[i]);
        }
        for (int i = 0; i < 20; i++){
            if(numeros[i]%2 == 0){
                num_par++;
            }
        }
        printf("tem %i numeros pares",num_par);
        break;
    }
    case 8:{
        int array[20],aux;
        printf("digite os valores:\n");
        for (int i = 0; i < 20; i++){
            scanf("%i",&array[i]);
        }
        system("cls");
        for (int i = 0; i < 10; i++){
            aux = array[i];
            array[i] = array[9-i];
            array[9-i] = aux;
        }
        for (int i = 0; i < 20; i++){
            printf("%i\n",array[i]);
        }
        break;
    }
    case 9:{
        int array[10],referencia,quantidade = 0;
        printf("insisa os valores: \n");
        for (int i = 0; i<10;i++){
            scanf("%i",&array[i]);
        }
        system("cls");
        printf("ensira um valor de referencia\n");
        scanf("%i",&referencia);
        system("cls");
        for(int i = 0;i<10;i++){
            if(array[i]<referencia){
                printf("%i e menor que %i\n",array[i],referencia);
            }
            if(array[i]>referencia){
                printf("%i e maior que %i\n",array[i],referencia);
            }
            if (array[i]==referencia){
                quantidade++;
            }
        }
        printf("quantidade de vezes que o numero de refencia: %i apareceu foi: %i",referencia,quantidade);
        break;
    }
    case 10:{
        int a[5],b[5];
        printf("insira os valores para A:\n");
        for (int i = 0; i < 5; i++){
            scanf("%i",&a[i]);
        }
        system("cls");
        printf("insira os valores para B:\n");
        for (int i = 0; i < 5; i++){
            scanf("%i",&b[i]);
        }
        system("cls");
        for (int i = 0; i < 5; i++){
            printf("%i\n",(a[i]+b[4-i]));
        }
        
        
        break;
    }
    default:
        break;
    }
    
    return 0;
}