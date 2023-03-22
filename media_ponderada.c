/*Proponha um algoritmo em C para calcular a nota de um candidato em um concurso.
Para isso, você deve ler as três notas do candidato entre 0 e 10.
Em seguida, calcule a nota final dele no concurso, a qual corresponde à média ponderada,
considerando que a primeira nota tem peso 2, a segunda tem peso 3 e a terceira tem peso 5.
Exibir uma mensagem dizendo qual a média do aluno
e se ele foi aprovado ou reprovado. A média para aprovação é 7.*/

#include <stdlib.h>
#include <conio.h>

float a, b, c, mediaP;

int main(){
    printf("Insira a primeira nota: \n");
    scanf("%f", &a);
    printf("Insira a segunda nota: \n");
    scanf("%f", &b);
    printf("Insira a terceira nota: \n");
    scanf("%f", &c);

    mediaP = ((a*2)+(b*3)+(c*5))/(2+3+5);

    if((a<0 || a>10) || (b<0 || b>10) || (c<0 || c>10)){
        printf("Erro! Verifique se o valor digitado é um número entre 0 e 10. \n");
        printf("Insira a primeira nota: \n");
        scanf("%f", &a);
        printf("Insira a segunda nota: \n");
        scanf("%f", &b);
        printf("Insira a terceira nota: \n");
        scanf("%f", &c);
    } else
        if (mediaP >= 7){
            printf("Media: %.1f \nAluno Aprovado! \n", mediaP);
        } else{
            printf("Media: %.1f \nAluno Reprovado! \n", mediaP);
        }
        getch();
        return 0;
    }


