/*Crie uma matriz de dimensões 3x3 a partir de números inteiros positivos lidos pelo usuário. ok
Seu programa deve controlar que essa leitura para aceitar apenas valores válidos. ok
Em seguida, exiba os elementos da diagonal principal e os elementos da diagonal secundária. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int mat[3][3], i, j;  //3 linhas, 3 colunas e dois contadores (um para cada).

    //leitura e dos valores da matriz + verificação de número positivo
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            do {
                printf("Informe o valor inteiro e positivo para a linha %d e coluna %d:", i, j);
                scanf("%d", &mat[i][j]);
            } while (mat[i][j]<0);
        }
    }

    //identifica e exibe elementos da diagonal principal
    printf("Diagonal principal: ");
    for(i=0;i<3;i++){
        printf("%d ", mat[i][i]);
    }
    printf("\n");

    //identifica e exibe elementos da diagonal secundária
    printf("Diagonal secundaria: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i + j == 2) {  // Verifica se está na diagonal secundária
                printf("%d ", mat[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
