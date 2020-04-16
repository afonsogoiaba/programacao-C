#include <stdio.h>
#include <stdbool.h>

void main(){

  int numero, contador = 0, quadrado = 0;
  bool retorno = false;

  printf("digite um numero: ");
  scanf("%d", &numero);

  while(retorno){

    quadrado = contador * contador;

    if( quadrado < numero ){

      contador --;
      quadrado = contador * contador;
      retorno = true;
    }

    else{

      contador++;
    }
  }
}