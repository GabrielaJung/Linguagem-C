#include <stdlib.h>
#include <conio.h>

int a, b;

int main(){
    printf("Insira um numero: \n");
    scanf("%d", &a);
    printf("Insira outro numero: \n");
    scanf("%d", &b);

    if (a>b){
        printf("Valor maior: %d \n", a);
    } else if (a<b){
        printf("Valor maior: %d \n", b);
    } else{
        printf("Valores iguais.");
    }

    getch();
    return 0;
}
