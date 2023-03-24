/* Uma escola de idiomas tem como critério de aprovação em um módulo que a
média do aluno seja maior ou igual a 7,0
e que seu número de faltas não ultrapasse a 25% das aulas.
A média é calculada a partir da média aritmética das duas melhores notas de três notas recebidas durante o módulo.
Assim, faça um programa em C que calcule e exiba a porcentagem de alunos:
-aprovados,
-reprovados por nota,
-reprovados por falta,
a partir da leitura dos seguintes dados:
quantidade de alunos no módulo,
quantidade de aulas do módulo,
as três notas de cada aluno,----> n1, n2, n3
a quantidade de faltas de cada aluno.
Lembre-se de garantir que os dados lidos estejam adequados ao problema. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int aluno, aulas, n1, n2, n3, maior1, maior2, faltas, porcentagem_faltas, media, aprovados, reprovados_nota, reprovados_falta, i, j;


int main(){
    aprovados = 0;
    reprovados_nota = 0;
    reprovados_falta = 0;
    do{
        printf("Insira a quantidade de alunos: \n");
        scanf("%d", &aluno);
    }while(aluno<0);

    do{
        printf("Insira a quantidade de aulas: \n");
        scanf("%d", &aulas);
    }while(aulas<=4);



    for(i=1; i <= aluno; i = i + 1){
        do{
            printf("\nInsira a primeira nota do aluno %d\n", i);
            scanf("%d", &n1);
        } while(n1<0 || n1>10);
        do{
            printf("Insira a segunda nota do aluno %d\n", i);
            scanf("%d", &n2);
        } while(n2<0 || n2>10);
        do{
            printf("Insira a terceira nota do aluno %d\n", i);
            scanf("%d", &n3);
        } while(n3<0 || n3>10);


        //Encontrar as duas maiores notas:
        if(n1 > n2 && n1 > n3){
            maior1 = n1;
            if(n2 > n3){
                maior2 = n2;
            } else {
                maior2 = n3;
            }
        } else if(n2 > n1 && n2 > n3){
            maior1 = n2;
            if(n1 > n3){
                maior2 = n1;
            } else {
                maior2 = n3;
            }
        } else if(n3 > n1 && n3 > n2){
            maior1 = n3;
            if(n1 > n2){
                maior2 = n1;
            } else {
                maior2 = n2;
            }
        } else {
            maior1 = n1;
            maior2 = n2;
        }

        //Cálculo da média:
        media = (maior1 + maior2)/2;
        printf("%d", maior1);

        //Descubra a quantidade de faltas do aluno:
        do{
            printf("\nInsira a quantidade de faltas do aluno %d: \n", i);
            scanf("%d", &faltas);
        } while (faltas < 0 || faltas > aulas);

        //Calcula porcentagem de faltas:
        porcentagem_faltas = (faltas*100)/aulas;
        printf("%d", porcentagem_faltas);

        if(media>=7 && porcentagem_faltas<=25){
            aprovados = aprovados + 1;
        } else if (media<7 && porcentagem_faltas<=25){
            reprovados_nota = reprovados_nota + 1;
        } else if (media>=7 && porcentagem_faltas>25){
            reprovados_falta = reprovados_falta + 1;
        }
    }
    //Porcentagem de cada estado:

    aprovados = (aprovados*100)/aluno;
    reprovados_nota = (reprovados_nota*100)/aluno;
    reprovados_falta = (reprovados_falta*100)/aluno;

    printf("Porcentagem de alunos aprovados: %d % \n", aprovados);
    printf("Porcentagem de alunos reprovados por nota: %d % \n", reprovados_nota);
    printf("Porcentagem de alunos reprovados por falta: %d % \n", reprovados_falta);
}
