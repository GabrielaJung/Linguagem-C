#include <stdlib.h>
#include <conio.h>

float x, quadrado, dobro, triplo, metade;

int main(){
    printf("Insira um numero: \n");
    scanf("%f", &x);

    quadrado = x*x;
    dobro = x*2;
    triplo = x*3;
    metade = x/2;

    printf(" Quadrado:%.1f\n Dobro:%.1f\n Triplo:%.1f\n Metade:%.1f\n ", quadrado, dobro, triplo, metade);

    getch();
    return 0;
}
