#include <stdio.h>

int main() {
  char tecla = 'a';
  printf("O valors de tecla = %c\n", tecla);
  tecla = 'F'; // troca o valor
  printf( "O valor de tecla = %c\n", tecla);

  int idade = 21;
  printf("O valor de idade = %i\n", idade);

  float media_final = 5.5f;
  printf("O valor de media = %f\n", media_final);

  double pi = 3.14156239;
  printf("O valor de pi = %f\n", pi);
  
  return 0;
}