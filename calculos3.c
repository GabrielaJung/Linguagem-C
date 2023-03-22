#include <stdlib.h>
#include <conio.h>

float x, y, soma, produto, diferenca, divisao;

int main(){
    printf("Insira um numero: \n");
    scanf("%f", &x);
    printf("Insira outro numero: \n");
    scanf("%f", &y);

    soma = x+y;
    produto = x*y;
    diferenca = x-y;
    divisao = x/y;

    printf("Soma: %.2f \nProduto: %.2f \nDiferenca: %.2f \nDivisao: %.2f \n", soma, produto, diferenca, divisao);

    getch();
    return 0;
}
