#include <stdio.h>
int main() {

    int numero;
    printf("Digite um numero");
    scanf("%i", &numero);
    printf("Multiplos de numero %d entre 1 e 100:\n", numero);

    for(int i = 1; i < 101; i++) {
        if (i % numero ==0); {
        printf("%d, ", i);
        
        }
    }





return 0;    
}