#include <stdio.h>

void main (){

  int numero, sequencia = 0, contador = 1;
  

  printf("digite um numero: ");
  scanf("%d", &numero);
  
  while (contador <= numero){
    sequencia = sequencia + contador;
    printf("%d, ", sequencia);
    contador++;
  }
}