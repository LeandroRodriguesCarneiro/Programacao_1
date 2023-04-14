#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[3][3];
    A[0][0]= 1;
    A[0][1]= 1;
    A[0][2]= 1;
    A[1][0]= 2;
    A[1][1]= 2;
    A[1][2]= 2;
    A[2][0]= 3;
    A[2][1]= 3;
    A[2][2]= 3;

    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            printf("\tA[%i][%i] = %i",j,i,A[j][i]);
        }
        printf("\n");
    }
}