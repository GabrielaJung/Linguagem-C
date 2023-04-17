/* Desenvolva um programa em C, ORGANIZADO EM FUNÇÕES, em que o usuário informa 16 números positivos maiores que zero,
os quais devem ser armazenados em uma matriz. Com os dados armazenados em memória, seu programa deve exibir a matriz,
e o maior elemento de cada linha, e o menor elemento de cada coluna. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//exibe matriz
void exibeMatriz(int matriz[][4], int linhas, int colunas){
    int i, j;
    for ( i = 0; i < linhas; i++){
        for( j = 0; j < colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

//encontra  e exibe maior elemento de cada linha
void maiorElementoLinha(int matriz[][4], int linhas, int colunas) {
    int i, j, maior;
    for (i = 0; i < linhas; i++){
        maior = matriz[i][0];
        for (j = 0; j < colunas; j++){
            if (matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
        printf("Maior elemento da linha %d: %d\n", i+1, maior);
    }
}

//encontra  e exibe menor elemento de cada coluna
void menorElementoColuna(int matriz[4][4], int linhas, int colunas) {
    int i, j, menor;
    for (j = 0; j < colunas; j++){
        menor = matriz[0][j];
         for (i = 0; i < linhas; i++){
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
        printf("Menor elemento da coluna %d: %d\n", i+1, menor);
    }
}

int main(){
    int mat[4][4], i, j, maior, menor;

    //leitura e dos valores da matriz + verificação de número positivo
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            do {
                printf("Informe o valor inteiro e positivo para a linha %d e coluna %d:", i, j);
                scanf("%d", &mat[i][j]);
            } while (mat[i][j]<0);
        }
    }

    //exibe matriz
    printf("\nSua matriz:\n");
    exibeMatriz(mat, i, j);

    //chamando funções para descobrir menor/maior
    printf("\nMaior elemento de cada linha:\n\n");
    maiorElementoLinha(mat, i, j);

    printf("\nMenor elemento de cada coluna:\n\n");
    menorElementoColuna(mat, i, j);
}
