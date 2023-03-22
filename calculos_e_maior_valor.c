#include <stdlib.h>
#include <conio.h>

int a, b, soma, produto;

int main(){
    printf("Insira um numero: \n");
    scanf("%d", &a);
    printf("Insira outro numero: \n");
    scanf("%d", &b);

    soma = a+b;
    produto = a*b;

    printf("Soma: %d \nProduto: %d \n", soma, produto);

    if (a>b){
        printf("Valor menor: %d \n", b);
        printf("Valor maior: %d \n", a);
    } else if (a<b){
        printf("Valor menor: %d \n", a);
        printf("Valor maior: %d \n", b);
    } else{
        printf("Valores iguais. \n");
    }

    getch();
    return 0;
}

