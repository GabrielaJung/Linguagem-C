#include <stdlib.h>
#include <conio.h>

int x;

int main(){
    printf("Insira um numero: \n");
    scanf("%d", &x);

    x=x*x;

    printf("Quadrado: %d", x);

    getch();
    return 0;
}
