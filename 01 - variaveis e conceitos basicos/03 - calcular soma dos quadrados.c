#include <stdio.h>

void main (){

  int n1, n2, soma;

  printf("digite um numero: ");
  scanf("%d", &n1);
  printf("digite outro numero: ");
  scanf("%d", &n2);

  n1 = n1 * n1;
  n2 = n2 * n2;
  soma = n1 + n2;

  printf("a soma dos quadrados eh: %d", soma);
}
