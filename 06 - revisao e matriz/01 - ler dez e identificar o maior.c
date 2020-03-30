#include <stdio.h>

void main (){

  int numero, maior_numero = 0, contador = 0;

  do{
    printf("digite um numero: ");
    scanf("%d", &numero);

    if(numero > maior_numero){

      maior_numero = numero;
    }

    contador ++;
  }

  while(contador < 10);
  printf("o maior numero da sequencia sera: %d", maior_numero);
}