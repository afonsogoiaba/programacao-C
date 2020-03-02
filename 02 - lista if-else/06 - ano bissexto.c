#include <stdio.h>

void main(){

  int ano, resto;

  printf("digite o ano que deseja verificar:");
  scanf("%d", &ano);

  resto = ano % 4;

  if(resto == 0){

    printf("o ano %d eh bissexto", ano);
  }

  else{
    printf("o ano %d nao eh bissexto", ano);
  }
}
