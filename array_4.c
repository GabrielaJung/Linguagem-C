/* Faça um programa que receba do usuário dois arrays, A e B, com 10 números inteiros cada.
Crie um novo array C, correspondente a A – B, mostre na tela os dados do array C. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int a[10], b[10], i, c[10];

int main(void){
    i = 0;

    //pegando dez valores de A e B, subtraindo-os e adicionando o resultado em C
    for(i=0;i<10; i++){
        printf("Digite o valor para a posicao %d do vetor A: \n", i);
        scanf("%d", &a[i]);
        printf("Digite o valor para a posicao %d do vetor B: \n", i);
        scanf("%d", &b[i]);

        c[i] = a[i]-b[i];
    }

    printf("Valores armazenados em C, subtraindo A-B: \n", c);

    for(i=0;i<10;i++){
        printf("%d ", c[i]);
    }

    getch();
    return 0;
}
