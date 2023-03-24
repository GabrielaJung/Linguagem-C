/*Proponha um programa em C que lê uma variável n, inteira e maior que zero,
que representa o número de linhas da figura que segue o padrão a seguir:

n= 5
*****
****
***
**
*          */

#include <stdlib.h>
#include <conio.h>

int n, i, x; //i e x são contadores.
int main(void){
    printf("Informe o numero de linhas: \n");

    do{
        scanf("%d", &n);
    } while(n < 0);

    for(i=0; i<n; i++){
        for(x=n; x>i; x--){
            printf("*");
        }
        printf("\n");
    }

    getch();
    return 0;
}

