#include <stdio.h>
#include <limits.h>
#include <float.h>


int main () {
printf("o tipo 'char' ocupa %lu byte(s) na memoria\n", sizeof(char));
  printf("o tipo 'int' ocupa %lu byte(s) na memoria.\n", sizeof(int));
  printf("O tipo 'float' ocupa %lu byte(s) na memória.\n", sizeof(float));
  printf("O tipo 'double' ocupa %lu byte(s) na memória.\n", sizeof(double));
  printf("O tipo 'void' ocupa %lu byte(s) na memória.\n", sizeof(void));
printf("O tipo 'char' aceita valores entre %i e %i.\n", CHAR_MIN, CHAR_MAX);
  printf("O tipo 'int' aceita valores entre %i e %i.\n", INT_MIN, INT_MAX);
printf("O tipo 'float' aceita valores entre %E e %E.\n", FLT_MIN, FLT_MAX);
  printf("O tipo 'double' aceita valores entre %E e %E.\n", DBL_MIN, DBL_MAX);


  
  return 0;
  
}