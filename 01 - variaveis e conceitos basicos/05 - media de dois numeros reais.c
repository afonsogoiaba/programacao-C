#include <stdio.h>
void main (){

  float n1, n2, media;

  printf("digite um numero: ");
  scanf("%f", &n1);
  printf("digite outro numero: ");
  scanf("%f", &n2);

  media = (n1 + n2) / 2;

  printf("a media dos numeros eh: %.2f", media);
}
