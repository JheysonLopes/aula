#include <stdio.h>

int main() {
  char tecla = '\0'; // caractere nulo

  printf("Digite uma tecla: ");
  int deu_certo = scanf("%c", &tecla);
  getchar(); // limpa o \n
  printf("Você digitou: %c\n", tecla);

  printf("Digitou outra tecla: ");
  deu_certo = scanf("%c", &tecla);
  getchar();
  printf("Você digitou: %c\n", tecla);

  char nome[31];
  printf("Digite seu nome: ");
  deu_certo = scanf("%[^\n]s", nome);
  printf("Fe pra nois %s\n", nome);
  
  
  return 0;
}