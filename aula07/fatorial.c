#include <stdio.h>
int main() {

    int numero, fatorial = 1;

    printf("Entre com um numero: ");
    scanf("%i", &numero);

    for(int i=numero; i>0; i--) {
        fatorial = fatorial * i;
    }
    printf("O fatorial de %d eh %d\n", numero, fatorial);
    

return 0;
}