#include <stdlib.h>
#include <conio.h>

int x, y, soma, produto, diferenca;

int main(){
    printf("Insira um numero: \n");
    scanf("%d", &x);
    printf("Insira outro numero: \n");
    scanf("%d", &y);

    soma = x+y;
    produto = x*y;
    diferenca = x-y;

    printf(" Soma:%d\n Produto:%d\n Diferenca:%d\n ", soma, produto, diferenca);

    getch();
    return 0;
}
