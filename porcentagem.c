#include <stdlib.h>
#include <conio.h>

float x, p3, p30, p130;

int main(){
    printf("Insira um numero: \n");
    scanf("%f", &x);

    p3 = x*0.03;
    p30 = x*0.3;
    p130 = x*1.3;

    printf(" Tres porcento:%.1f\n Trinta porcento:%.1f\n Cento e trinta porcento:%.1f\n ", p3, p30, p130);

    getch();
    return 0;
}

