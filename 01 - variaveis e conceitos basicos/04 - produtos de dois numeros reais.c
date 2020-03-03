#include <stdio.h>

void main (){

  float n1, n2, produto;

  printf("digite um numero: ");
  scanf("%f", &n1);
  printf("digite outro numero: ");
  scanf("%f", &n2);

  produto = n1 * n2;
  printf("o produto eh: %.2f", produto);
}
