#include <stdio.h>

void main(){

  int numero, divisores = 0, contador = 1;
  printf("digite um numero: ");
  scanf("%d", &numero);

  do{
    
    if (numero % contador == 0){

      divisores = divisores + contador;
    }

    contador++;
  }

  while(contador < numero);

  if(divisores == numero){

    printf("o numero %d e perfeito!", numero);
  }
  
  else{
    printf("o numero %d nao e perfeito!", numero);
  }
}