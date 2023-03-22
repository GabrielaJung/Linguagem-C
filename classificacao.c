/* Elabore um algoritmo em C que, uma vez que o usuário informe a idade de um atleta,
o programa o classifique em uma das modalidades a seguir dos jogos da primavera:

Infantil A = 6 a 8 anos
Infantil B = 9 a 12 anos
Juvenil A = 13 a 14 anos
Juvenil B = 15 a 18 anos

Pessoas com menos de 6 anos ou maiores de 18 anos não podem participar da competição. */

#include <stdlib.h>
#include <conio.h>

int idade;

int main(){
    printf("Insira a idade do atleta: \n");
    scanf("%d", &idade);

    if(idade<6 || idade>18){
        printf("Que pena! Apenas pessoas entre 6 a 18 anos podem participar da competicao! \n");
    } else
        if (idade >= 6 && idade <= 8){
            printf("Classificacao da modalidade do atleta: Infantil A. \n");
        } else if (idade >= 9 && idade <= 12){
            printf("Classificacao da modalidade do atleta: Infantil B. \n");
        } else if (idade >= 13 && idade <= 14){
            printf("Classificacao da modalidade do atleta: Juvenil A. \n");
        } else if (idade >= 15 && idade <= 18){
            printf("Classificacao da modalidade do atleta: Juvenil B. \n");
        }
        getch();
        return 0;
    }
