#include <stdio.h>

int main() {
float nota = 0.0f;

  printf("Entre com uma nota entre 0 e 10: ");
  int deu_certo = scanf("%f", &nota);

  printf("Você digitou: %.1f\n", nota);
  
double pi = 0.0;
  printf("Entre com um valor de pi: ");
  deu_certo = scanf("%lf", &pi);

  printf("Você digitou: %.10f\n", pi);

  return 0;
}