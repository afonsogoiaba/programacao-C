#include <stdio.h>

void main(){

  int numero, fatorial = 0, contador = 1;
  printf("digite um numero: ");
  scanf("%d", &numero);

  fatorial = numero;
  do{

    if(numero == 0){

      fatorial = 1;
    }

    fatorial = fatorial * contador; 
    contador++;
  }

  while (contador < numero);

  printf("%d! e igual a: %d", numero, fatorial);
}