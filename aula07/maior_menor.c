#include <stdio.h>
int main() {

int numero, maior, menor = 0;

printf("Entre com um numero: ");
scanf("%i", &numero);


while(numero != 0) {
    if(numero > maior) {
       maior = numero; 
    } 
    if(numero < menor) {
       menor = numero;

    }
printf("Entre com um numero: ");
scanf("%i", &numero);
}
 printf("numero %i\n, maior%i\n, menor %i\n");


    return 0;

}