/* Proponha um programa em C que l� uma matriz A, com 2 linhas e 2 colunas.                                          ok
A matriz A deve aceitar apenas n�meros positivos.                                                                    ok
O programa tamb�m deve ter uma matriz B com as mesmas dimens�es de A, por sua vez,                                   ok
inicializada como valor 2 em todas as posi��es.                                                                      ok
A partir das duas matrizes,
crie a matriz R, correspondente ao resto da divis�o inteira dos elementos correspondentes nas matrizes A e B,
e a exiba no formato de matriz. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){
    int mA[2][2], mB[2][2], mR[2][2];  //3 matrizes de 2 linhas, 2 colunas
    int i, j; //dois contadores (um para cada l e c).

    //faz todos as posi��es da matriz B valerem 2
    for(i=0;i<2;i++){ //linhas
        for(j=0;j<2;j++){ //colunas
            mB[i][j] = 2;
        }
    }

    //leitura e dos valores da matriz A + verifica��o de n�mero positivo
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            do {
                printf("Informe o valor inteiro e positivo para a linha %d e coluna %d:", i, j);
                scanf("%d", &mA[i][j]);
            } while (mA[i][j]<0);
        }
    }
    printf("\n");

    //matriz R recebe o resto da divis�o inteira dos elementos correspondentes das matrizes A e B
    for(i=0;i<2;i++){ //linhas
        for(j=0;j<2;j++){ //colunas
            mR[i][j] = mA[i][j]%mB[i][j];
            printf("%d\t", mR[i][j]);
        }
        printf("\n");
    }
    return 0;
}
