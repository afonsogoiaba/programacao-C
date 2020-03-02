#include <stdio.h>

void main(){

  int n1, n2, diferenca;

  printf("digite um numero: ");
  scanf("%d", &n1);
  printf("digite outro numero: ");
  scanf("%d", &n2);

  if(n1 >= n2){

    diferenca = n1 - n2;
  }

  else{
    diferenca = n2 - n1;
  }

  printf("a diferenca eh: %d", diferenca);
}
