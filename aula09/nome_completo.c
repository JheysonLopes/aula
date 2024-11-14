#include <stdio.h>
#include <string.h>

int main () {

    char primeiro_nome[11];
    char nome_do_meio[11];
    char ultimo_nome[11];

    printf("Digite o primeiro nome: ");
    scanf("%[^\n]s", primeiro_nome);
    while(getchar()!='\n');

    printf("Digite o nome do meio: ");
    scanf("%[^\n]s", nome_do_meio);
    while(getchar()!='\n');

    printf("Digite o ultimo nome: ");
    scanf("%[^\n]s", ultimo_nome);
    while(getchar()!='\n');
    
    char nome[50];

    strcpy(nome, primeiro_nome);
    strcat(nome, " ");
    strcat(nome, nome_do_meio);
    strcat(nome, " ");
    strcat(nome, ultimo_nome);

    printf("Nome completo: %s\n", nome);


return 0;    
}