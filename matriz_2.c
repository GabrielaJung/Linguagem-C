/* Desenvolva um programa em C em que o usuário informa 12 números inteiros, os quais devem ser armazenados em uma matriz.
Com os dados armazenados em memória,
seu programa deve exibir a matriz, ok
e o menor elemento de cada linha,  ok
e o maior elemento de cada coluna.   */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int mat[4][3], i, j, menor, maior;  //4 linhas, 3 colunas e dois contadores (um para cada).


    //leitura e dos valores da matriz + verificação de número positivo
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            do {
                printf("Informe o valor inteiro e positivo para a linha %d e coluna %d:\n1", i, j);
                scanf("%d", &mat[i][j]);
            } while (mat[i][j]<0);
        }
    }

    //exibe a matriz
    printf("Matriz: \n");
    for(i=0;i<4;i++){ //linhas
        for(j=0;j<3;j++){ //colunas
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    //exibe menor elemento de cada linha
    for(i=0;i<4;i++){ //linhas
        menor = mat[i][0]; //inicia com o 1º elemento de cada linha
        for(j=0;j<3;j++){ //colunas
            if(mat[i][j] < menor){
                menor = mat[i][j];
            }
        }
        printf("menor elemento da linha %d: %d\n", i+1, menor);
    }
    printf("\n");

    //exibe maior elemento de cada linha
    for(j=0;j<3;j++){ //colunas
        maior = mat[0][j]; //inicia com o 1º elemento de cada coluna
        for(i=0;i<4;i++){ //linhas
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
        printf("maior elemento da coluna %d: %d\n", j+1, maior);
    }
    return 0;
}
