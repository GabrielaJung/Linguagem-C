/*Proponha um programa em C que l� uma vari�vel n,
inteira e maior que zero, que representa o n�mero de
linhas da figura que segue o padr�o a seguir:

n= 5
*****
*****
*****
*****
*****   */

#include <stdlib.h>
#include <conio.h>

int n, i; //i � o contador.
char a = 42; //O n�mero 42 equivale ao asterisco '*' na tabela ASCII.

int main(){
    printf("Escreva um n�mero inteiro maior que zero: \n");

    do{
        scanf("%d", &n);
    } while(n < 0);

    for(i=0; i<n; i++){
        printf("%c%c%c%c%c \n", a, a, a, a, a);
    }

    getch();
    return 0;
}

