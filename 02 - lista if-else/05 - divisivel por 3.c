#include <stdio.h>

void main(){

  int numero, resto;

  printf("digite um numero:");
  scanf("%d", &numero);

  resto = numero % 3;

  if(resto == 0){

    printf("o numero %d eh divisivel por 3", numero);
  }

  else{


    printf("o numero %d nao eh divisivel por 3", numero);
  }
}
