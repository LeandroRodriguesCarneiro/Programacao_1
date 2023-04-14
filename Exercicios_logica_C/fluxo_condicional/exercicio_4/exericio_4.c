#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    float a,b,c,delta,x1,x2;
    printf("insira o valor de A\n");
    scanf("%i",&a);
    printf("insira o valor de B\n");
    scanf("%i",&b);
    printf("insira o valor de C\n");
    scanf("%i",&c);
    delta = pow(b,2)+4*a*c;
    if (delta==0){
        x1 = ((-b)+sqrt(delta))/2*a;
        x2 = ((-b)-sqrt(delta))/2*a;
        printf("\n o x1e = %i",x1);
    }else if(delta>0){
        x1 = ((-b)+sqrt(delta))/2*a;
        x2 = ((-b)-sqrt(delta))/2*a;
        printf("\n o x1e = %i e o x2 = %i",x1,x2);
    }else{
        printf("\n delta nao possui valores reais\n");
    }
    
    return 0;
}
