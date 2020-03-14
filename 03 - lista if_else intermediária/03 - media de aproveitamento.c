#include <stdio.h>

void main(){

  int identificacao;
  float nota1, nota2, nota3, media_exercicios;
  double media_aproveitamento;

  printf("digite a identificacao do aluno: ");
  scanf("%d", &identificacao);

  printf("digite a nota da primeira avaliacao: ");
  scanf("%f", &nota1);
  printf("digite a nota da segunda avaliacao: ");
  scanf("%f", &nota2);
  printf("digite a nota da terceira avaliacao: ");
  scanf("%f", &nota3);
  printf("digite a media dos exercicios: ");
  scanf("%f", &media_exercicios);

  media_aproveitamento = (nota1 + (nota2 * 2) + (nota3 * 3) + media_exercicios) / 7;

  if(media_aproveitamento >= 9.0){

    printf("o aluno %d obteve conceito A", identificacao);
  }

  else if(media_aproveitamento >= 7.5 && media_aproveitamento < 9){
    printf("o aluno %d obteve conceito B", identificacao);
  }

  else if(media_aproveitamento >= 6.0 && media_aproveitamento < 7.5){
    printf("o aluno %d obteve conceito C", identificacao);
  }

  else if(media_aproveitamento >= 4.0 && media_aproveitamento < 6.0){
    printf("o aluno %d obteve conceito D", identificacao);
  }

  else{

    printf("o aluno %d obteve conceito E", identificacao);
  }
}
