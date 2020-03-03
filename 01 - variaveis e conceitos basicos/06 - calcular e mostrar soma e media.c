#include <stdio.h>

void main (){

  float n1, n2, n3, media, soma;

  printf("digite um numero: ");
  scanf("%f", &n1);
  printf("digite outro numero: ");
  scanf("%f", &n2);
  printf("digite outro numero: ");
  scanf("%f", &n3);

  soma = n1 + n2 + n3;
  printf("a soma dos numeros eh: %2.f \n", soma);

  media = soma / 3;
  printf("a media dos numeros eh: %.2f", media);

}

