/*Proponha um programa em C que leia um número inteiro positivo ne em seguida exiba n linhas do chamado Triângulo de Floyd, conforme exemplificado abaixo:

n = 3
1
23
456       */

#include <stdlib.h>
#include <conio.h>

int n, i, j, k; //i, j e k são contadores.
int main(void){
    printf("Informe o numero de linhas do triangulo: \n");

    do{
        scanf("%d", &n);
    } while(n < 0);

    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            k++;
            printf("%d ", k);
        }
        printf("\n");
    }

    getch();
    return 0;
}

