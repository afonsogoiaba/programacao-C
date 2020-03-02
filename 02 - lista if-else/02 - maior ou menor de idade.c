#include <stdio.h>

void main (){

  int idade;

  printf("digite sua idade: ");
  scanf("%d", &idade);

  if(idade >= 18){

    printf("com %d anos voce eh maior de idade", idade);
  }

  else{
    printf("com %d anos voce eh menor de idade", idade);
  }
}
