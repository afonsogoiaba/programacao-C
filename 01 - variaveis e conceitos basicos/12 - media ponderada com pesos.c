#include <stdio.h>

void main (){

  float nota1, nota2, nota3, media;

  printf("digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("digite a segunda nota: ");
  scanf("%f", &nota2);
  printf("digite a terceira nota: ");
  scanf("%f", &nota3);

  media = ((nota1 * 0.2) + (nota2 * 0.3) + (nota3 * 0.5) / 3);
  printf("a media ponderada do aluno eh: %.2f", media);
}
