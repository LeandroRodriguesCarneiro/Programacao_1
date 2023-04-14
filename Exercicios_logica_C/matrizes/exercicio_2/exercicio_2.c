#include <stdio.h>
#include <stdlib.h>
int main(){
    int A[5] = {1,2,3,4,5},B[10] = {3,2,1,0,1,2,2,2,2,2} ,C[15];
    for(int i = 0;i<5;i++){
        C[i] = A[i];
        C[i+5] = B[i];
        C[i+10] = B[i+5];
    }
    for(int i = 0;i<15;i++){
        printf("C[%i] = %i\n", i,C[i]);
    }
}