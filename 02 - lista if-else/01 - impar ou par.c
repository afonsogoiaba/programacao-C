#include <stdio.h>

void main (){
  int numero, resto;

  printf("digite um numero inteiro: ");
  scanf("%d", &numero);

  resto = numero % 2;

  if(resto == 0){

    printf("o numero %d eh par", numero);
  }

  else{
    printf("o numero %d eh impar", numero);
  }

}
