#include <stdio.h>

void main(){

  float nota1, nota2, nota3, nota4;
  double media;

  printf("digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("digite a segunda nota: ");
  scanf("%f", &nota2);
  printf("digite a terceira nota: ");
  scanf("%f", &nota3);
  printf("digite a quarta nota: ");
  scanf("%f", &nota4);

  media = (nota1 + nota2 + nota3+ nota4) / 4;

  if(media >= 6.0){

    printf("a media do aluno eh %.2f, APROVADO", media);
  }

  else if(media >= 3.0 && media < 6.0){

    printf("a media do aluno eh %.2f, EXAME", media);
  }

  else{
    printf("a media do aluno eh %.2f, REPROVADO", media);
  }
}
