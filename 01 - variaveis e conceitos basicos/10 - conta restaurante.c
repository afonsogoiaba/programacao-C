#include <stdio.h>

void main(){

  float conta, comissao, conta_comissao;

  printf("digite o valor da comanda: ");
  scanf("%f", &conta);

  comissao = (conta * 0.1);
  conta_comissao = conta + comissao;
  printf("a conta total eh: %.2f", conta_comissao);
}
