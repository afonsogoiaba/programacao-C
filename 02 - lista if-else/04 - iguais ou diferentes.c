#include <stdio.h>

void main (){

  int n1, n2;

  printf("digite um numero: ");
  scanf("%d", &n1);
  printf("digite outro numero: ");
  scanf("%d", &n2);

  if(n1 == n2){

    printf("os numeros %d e %d sao iguais", n1, n2);
  }

  else{
    printf("os numeros %d e %d sao diferentes", n1, n2);
  }
}
