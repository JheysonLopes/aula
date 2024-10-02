#include <stdio.h>

int main() {
int matricula;
  float a1, a2, media;
  //leitura dos valores

  
  printf("Digite a matricula: ");
  int deu_certo = scanf("%d", &matricula);
  
  printf("Digite a nota da A1: ");
  deu_certo = scanf("%f", &a1);
  
  printf("Digite a nota da A2: ");
  deu_certo = scanf("%f", &a2);

  //calculo da media
  media = (a1 + a2) / 2;

  //exibicao dos boletim
  printf("Matricula\tA1\tA2\tMedia\n");
  printf("%d\t%.1f\t%.1f\t%.1f\n", matricula, a1, a2, media);
  
  return 0;
}