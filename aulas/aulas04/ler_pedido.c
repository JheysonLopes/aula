#include <stdio.h>

int main() {
// Declaração de variáveis
  char produto[31];
  int quantidade;
  float valor;

  //Leitura das variasveis
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%20s", produto);

  printf("Entre com a quantidade: ");
  deu_certo = scanf("%i", &quantidade);

  printf("Entre com o valor: ");
  deu_certo = scanf("%f", &valor);

  //Exibicao do pedido
  printf("==============================\n");
  printf("           Produto\n");
  printf("==============================\n");
  printf("Produto\tQtd\tValor\n");
  printf("%s\t%i\tR$ %.2f\n", produto, quantidade, valor);
  printf("==============================\n");
  
  

  
  return 0;
}