#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[5] = {3,2,1,0,1},B[5] = {2,2,2,2,2} ,C[10];
    for(int i = 0;i<5;i++){
        C[i] = A[i];
        C[i+5] = B[i];
    }
    for(int i = 0;i<10;i++){
        printf("C[%i] = %i\n", i,C[i]);
    }
}