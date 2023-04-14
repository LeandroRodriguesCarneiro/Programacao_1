#include<stdio.h>
#include<stdlib.h>
int main(){
    float raio,area;
    printf("insira o rio da circunferencia \n");
    scanf("%f",&raio);
    area = 3.14159 * (raio*raio);
    printf("a area da circunferencia e: %.2f",area);

    return 0;
}
