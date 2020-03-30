#include <stdio.h>

void main(){

  int n1, n2, produto = 0, contador = 1;

  printf("digite um numero: ");
  scanf("%d", &n1);
  printf("digite outro numero: ");
  scanf("%d", &n2);

  do{
    produto = produto + n1;
    contador++;
  }
  while(contador <= n2);

  printf("as somas consecutivas geraram o numero: %d", produto);
}