#include <stdio.h>

void main (){

  int n1, n2, resto;

  printf("digite um numero: ");
  scanf("%d", &n1);
  printf("digite outro numero: ");
  scanf("%d", &n2);

  resto = n1 % n2;

  if(resto == 0){

    printf("o numero %d eh divisivel por %d", n1, n2);
  }

  else{
    printf("o numero %d nao eh divisivel por %d", n1, n2);
  }
}
