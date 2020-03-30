#include <stdio.h>

void main(){

  int contador = 1;
  int numero;

  do{
    printf("digite um numero: ");
    scanf("%d", &numero);
    
    if(numero % 3 == 0){
      printf("o numero %d e divisivel por 3 \n", numero);
    }

    contador++;
  }
  
  while(contador <= 10);
}