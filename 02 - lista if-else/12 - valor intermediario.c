#include <stdio.h>

void main(){

  int n1, n2, n3;

  printf("digite o primeiro numero: ");
  scanf("%d", &n1);
  printf("digite o segundo numero: ");
  scanf("%d", &n2);
  printf("digite o terceiro numero: ");
  scanf("%d", &n3);

  if(n1 > n2 && n1 > n3){
    if(n2 < n1 && n2 < n3){
      printf("o numero %d eh o intermediario", n3);
    }

    else{
      printf("o numero %d eh o intermediario", n2);
    }
  }

  else if(n2 > n1 && n2 > n3){
    if(n1 < n2 && n1 < n3 ){

      printf("o numero %d eh o intermediario", n3);
    }

    else{
      printf("o numero %d eh o intermediario", n1);
    }
  }

  else{
    if(n1 < n2){

      printf("o numero %d eh o intermediario", n2);
    }

    else{
      printf("o numero %d eh o intermediario", n1);
    }
  }
}
