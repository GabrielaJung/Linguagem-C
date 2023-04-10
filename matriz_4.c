/* Faça um programa em C que leia dois vetores, denominados A e B, de 5 elementos cada um, respeitando as seguintes regras:

- Vetor A deve conter apenas valores pares; ok
- Vetor B deve conter apenas valores ímpares. ok

A partir dos dois vetores, crie uma matriz que:

a) Na primeira linha armazene o vetor A
b) Na segunda linha armazene o vetor B
c) Na terceira linha, contenha para cada coluna a soma dos elementos da primeira e da segunda linha correspondentes à mesma coluna.

Por fim, exiba a matriz resultante organizada em linhas e colunas. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int aA[5], aB[5], aC[5], mat[3][5];  //3 arrays, cada um com 5 posições e uma matriz (Final)
    int i, j, resto; //dois contadores (um para cada l e c).

    //pegando cinco valores pares positivos para o array aA
    for(j=0;j<5; j++){
        do{
            printf("Digite um valor PAR para a posicao %d do vetor A: ", j);
            scanf("%d", &aA[j]);
            resto = aA[j]%2;
        } while(resto!=0);
    }

    //pegando cinco valores ímpares positivos para o array aB
    for(j=0;j<5; j++){
        do{
            printf("Digite um valor IMPAR para a posicao %d do vetor B: ", j);
            scanf("%d", &aB[j]);
            resto = aB[j]%2;
        } while(resto==0);
    }

    //somando valores de A e B e colocando em C
    for(j=0;j<5;j++){
        aC[j] = aA[j] + aB[j];
    }

    //matriz recebe os devidos valores - linha 1 recebe aA; - linha2 recebe aB; -linha 3 recebe aC (soma de aA +aB)
    printf("\nMatriz: \n");
    for(i=0;i<3;i++){ //linhas
        for(j=0;j<5;j++){ //colunas
            if(i==0){
                mat[i][j] = aA[j];
                printf("%d\t", mat[i][j]);
            } else if(i==1){
                mat[i][j] = aB[j];
                printf("%d\t", mat[i][j]);
            } else {
                mat[i][j] = aC[j];
                printf("%d\t", mat[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}
