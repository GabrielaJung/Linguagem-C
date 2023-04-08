/* Fa�a um programa que receba do usu�rio um vetor X de 10 posi��es.
Em seguida dever�o ser impressos o maior e o menor elemento desse vetor. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float arr[10], positivos;
int i, negativos;

int main(void){
    positivos = 0.0;
    i = 0;
    negativos = 0;

    //pegando dez valores
    for(i=0;i<10; i++){
        printf("Digite o valor para a posicao %d do vetor: ", i);
        scanf("%f", &arr[i]);
    }

    // Calcula a quantidade de n�meros negativos e a soma dos n�meros positivos
    for(i = 0; i < 10; i++) {
        if(arr[i] < 0) {
            negativos++;
        } else {
            positivos += arr[i];
        }
    }

    printf("Quantidade de numeros negativos: %d\n", negativos);
    printf("Soma dos numeros positivos: %.2f\n", positivos);

    getch();
    return 0;
}
