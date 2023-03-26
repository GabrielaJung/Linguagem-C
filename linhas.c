/*Proponha um programa em C que lê uma variável n,
inteira e maior que zero, que representa o número de
linhas da figura que segue o padrão a seguir:

n= 5
*****
*****
*****
*****
*****   */

#include <stdlib.h>
#include <conio.h>

int n, i; //i é o contador.
char a = 42; //O número 42 equivale ao asterisco '*' na tabela ASCII.

int main(){
    printf("Escreva um número inteiro maior que zero: \n");

    do{
        scanf("%d", &n);
    } while(n < 0);

    for(i=0; i<n; i++){
        printf("%c%c%c%c%c \n", a, a, a, a, a);
    }

    getch();
    return 0;
}

