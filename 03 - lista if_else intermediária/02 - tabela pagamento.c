#include <stdio.h>

void main(){

  int idade;

  printf("digite sua idade: ");
  scanf("%d", &idade);

  if(idade <= 10){

    printf("voce pagara 30 reais");
  }

  else if(idade >= 11 && idade <= 29){
    printf("voce pagara 60 reais");
  }

  else if(idade >= 30 && idade <= 45){
    printf("voce pagara 120 reais");
  }

  else if(idade >= 46 && idade <= 59){
    printf("voce pagara 150 reais");
  }

  else{
    printf("voce pagara 250 reais");
  }
}
