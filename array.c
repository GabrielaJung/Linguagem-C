/* Faça um programa que leia um vetor de oito posições.
Em seguida, leia também dois valores X e Y quaisquer correspondentes as duas posições no vetor.
Seu programa deverá exibir a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int valores[8], x, y, i, soma;

int main(void){

    //pegando oito valores
    for(i=0;i<8; i++){
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf("%d", &valores[i]);
    }

    do {
        printf("Escolha uma posicao do vetor, entre 0 e 7: \n");
        scanf("%d", &x);
    } while(x<0 || x>7);

    do {
        printf("Escolha outra posicao do vetor, entre 0 e 7: \n");
        scanf("%d", &y);
    } while(y<0 || y>7);

    soma = valores[x] + valores[y];

    printf("A soma dos valores nas posicoes %d e %d do vetor, resulta em %d.", x, y, soma);

    getch();
    return 0;
}
