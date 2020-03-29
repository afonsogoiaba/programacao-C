#include <stdio.h>
#include <stdbool.h>

void main (){

  int codigo;
  float valor_produto, produto_desconto;
  bool pertence_liq = true;

  printf("================================  \n");
  printf("| CODIGO DO PRODUTO | DESCONTO | \n");
  printf("|         1001      |   22%%    | \n");
  printf("|         1254      |   30%%    | \n");
  printf("|         1548      |   32%%    | \n");
  printf("|         1687      |   37%%    | \n");
  printf("|         1923      |   40%%    | \n");
  printf("================================  \n");

  printf("digite o codigo do produto: ");
  scanf("%d", &codigo);
  printf("digite o valor do produto: ");
  scanf("%f", &valor_produto);

  switch (codigo){

    case 1001:

      produto_desconto = valor_produto - (valor_produto * 0.22);
      break;

    case 1254:

      produto_desconto = valor_produto - (valor_produto * 0.3);
      break;
    
    case 1548:

      produto_desconto = valor_produto - (valor_produto *0.32);
      break;

    case 1687:

      produto_desconto = valor_produto - (produto_desconto* 0.37);
      break;
    
    case 1923:

      produto_desconto = valor_produto - (valor_produto * 0.4);
      break;

    default:
      printf("o codigo informado nao pertence a liquidacao! \n");
      printf("o produto %d continua com o valor de R$%.2f reais!", codigo, valor_produto);
      pertence_liq = false;
  }

  if(pertence_liq){

    printf("o produto %d custa R$%.2f reais durante a liquidacao!", codigo, produto_desconto);
  }
}