#include <stdio.h>

void main (){

  float numero;
  printf("digite um numero inteiro qualquer: ");
  scanf("%f", &numero);

  while (numero >= 1){
    numero = numero / 2;
    printf("o numero dividido por 2 tem resultado: %.2f \n", numero);
  }
}