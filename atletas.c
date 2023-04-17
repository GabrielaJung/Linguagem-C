/* Proponha um programa em C, para gerenciar os atletas para os quais o usu�rio vai torcer nas Olimp�adas.
O programa deve ser organizado em fun��es, e solicitar na inicializa��o a quantidade de atletas que o usu�rio pretende torcer.
A primeira deve realizar a leitura e armazenamento dos dados de cada atleta:
nome, esporte, idade, altura, e expectativa de medalha (ouro, prata, bronze ou nenhuma). Para isso deve ser empregado struct.

Al�m disso, observe que o usu�rio n�o precisa armazenar todos os atletas de uma vez.
Tamb�m deve ser implementada uma fun��o para pesquisar o atleta por nome.
Al�m disso, uma fun��o deve exibir os atletas pela expectativa de medalha, ou seja,
primeiro os com chance de ouro, depois, de prata, e assim sucessivamente.

Importante:

- Priorize o uso de vari�veis locais;
- Valide os dados informados sempre que poss�vel;
- Proponha outras fun��es que julgar necess�rias. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ATLETAS 100

typedef enum { OURO, PRATA, BRONZE, NENHUMA } Medalha;

typedef struct {
    char nome[50];
    char esporte[50];
    int idade;
    float altura;
    Medalha medalha; } Atleta;

Atleta atletas[MAX_ATLETAS];
int nAtletas = 0;

void cadastrarAtleta() {
    if (nAtletas >= MAX_ATLETAS) {
        printf("Limite de atletas cadastrados atingido.\n");
        return;
    }
    Atleta novoAtleta;
    printf("Digite o nome do atleta: ");
    scanf("%s", novoAtleta.nome); //fgets(novoAtleta.nome, 50, stdin); 
    printf("\n");

    printf("Digite o esporte do atleta: ");
    scanf("%s",fgets(novoAtleta.esporte, 50, stdin));
    printf("\n");

    printf("Digite a idade do atleta: ");
    scanf("%d", &novoAtleta.idade);

    printf("Digite a altura do atleta: ");
    scanf("%f", &novoAtleta.altura);

    printf("Digite a expectativa de medalha do atleta (0 - ouro, 1 - prata, 2 - bronze, 3 - nenhuma): ");
    int opcao; scanf("%d", &opcao);
    novoAtleta.medalha = opcao >= 0 && opcao <= 3 ? opcao : NENHUMA;
    atletas[nAtletas++] = novoAtleta;
    printf("Atleta cadastrado com sucesso!\n");
}

void pesquisarAtleta() {
    if (nAtletas == 0) {
        printf("Nao ha atletas cadastrados.\n");
        return;
    }
    char nomePesquisado[50];
    printf("Digite o nome do atleta a ser pesquisado: ");
    scanf("%s", nomePesquisado); //fgets(nomePesquisado, 50, stdin);
    printf("\n");
    for (int i = 0; i < nAtletas; i++) {
        if (strcmp(nomePesquisado, atletas[i].nome) == 0) {
            printf("Atleta encontrado:\nNome: %s\nEsporte: %s\nIdade: %d\nAltura: %.2f\nExpectativa de medalha: %s\n", atletas[i].nome, atletas[i].esporte, atletas[i].idade, atletas[i].altura, atletas[i].medalha == OURO ? "Ouro" : atletas[i].medalha == PRATA ? "Prata" : atletas[i].medalha == BRONZE ? "Bronze" : "Nenhuma");
            return;
        } else{
            printf("Atleta nao encontrado.\n");
        }
    }
}

int main(){
    int c;
    do{
        printf("\nDigite 1 se voce deseja cadastrar um atleta.\nDigite 2 se voce gostaria de pesquisar um atleta.\nDigite 3 se voce nao tiver mais atletas para cadastrar e nem pesquisar.\n");
        scanf("%d", &c);

        switch(c){
            case 1: cadastrarAtleta();
                    break;
            case 2: pesquisarAtleta();
                    break;
            case 3: printf("voce terminou de cadastrar seus atletas.");
                    break;
        }
    }while(c != 3);
}
