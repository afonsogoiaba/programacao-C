#include <stdio.h>

void main (){

  int n1, n2, n3;

  printf("digite um numero: ");
  scanf("%d", &n1);
  printf("digite outro numero: ");
  scanf("%d", &n2);
  printf("digite o ultimo numero: ");
  scanf("%d", &n3);

  if( n1 > n2 && n1 > n3){

    printf("o numero %d eh o maior", n1);
  }

  else if(n2 > n1 && n2 > n3){

    printf("o numero %d eh o maior", n2);
  }

  else{
    printf("o numero %d eh o maior", n3);
  }
}
