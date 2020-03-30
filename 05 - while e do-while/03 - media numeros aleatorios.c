#include <stdio.h>

void main(){

  int numero, contador = 0;
  float soma, media;

  while (numero != -99) {
    
    printf("digite um numero para adicionar a sua lista: ");
    scanf("%d", &numero);

    if(numero != -99 && numero >= 0){

      soma = soma + numero;
      contador++;
    }
  }

  media = soma / contador;
  printf("a media dos numeros positivos e: %.2f", media);
}