#include <stdio.h>

int main() {

int ano;
printf("Selecione um ano\n");
scanf("%d", &ano);
if((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
    isBissexto = 1; // ano bissexto
} else {
    isBissexto = 0; // nao e ano bissexto
}

switch(isBissexto) {
    case 1: printf("%d e um ano bissexto\n"); break;
    case 0: printf("%d nao e um ano bessexto\n"); break;
    default: printf("Fez Arte e deu errado fe pra tu");

}


return 0;    
}