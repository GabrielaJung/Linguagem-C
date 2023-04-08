/* Escreva um programa que leia do teclado um vetor de 10 posições.
Escreva na tela quantos valores pares foram armazenados nesse vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int arr[10], r, p, i;

int main(void){

    p=0;
    r=0;
    i=0;

    //pegando dez valores
    for(i=0;i<10; i++){
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf("%d", &arr[i]);

        r = arr[i]%2;

        if(r==0){
            p = p+1;
        }
    }

    printf("No vetor, foram armazenados %d numeros pares.", p);

    getch();
    return 0;
}

