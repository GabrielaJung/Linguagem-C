/*Crie uma matriz de dimens�es 3x3 a partir de n�meros inteiros positivos lidos pelo usu�rio. ok
Seu programa deve controlar que essa leitura para aceitar apenas valores v�lidos. ok
Em seguida, exiba os elementos da diagonal principal e os elementos da diagonal secund�ria. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int mat[3][3], i, j;  //3 linhas, 3 colunas e dois contadores (um para cada).

    //leitura e dos valores da matriz + verifica��o de n�mero positivo
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

    //identifica e exibe elementos da diagonal secund�ria
    printf("Diagonal secundaria: ");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i + j == 2) {  // Verifica se est� na diagonal secund�ria
                printf("%d ", mat[i][j]);
            }
        }
    }
    printf("\n");
    return 0;
}
