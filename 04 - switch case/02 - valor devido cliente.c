#include <stdio.h>
#include <stdbool.h>

void main (){

  int codigo, quantidade;
  float valor_devido;
  bool verifica = true; 

  printf("==============================================  \n");
  printf("|   CODIGO DO PRODUTO   |   PRECO UNITARIO    | \n");
  printf("|          1001         |        12,32        | \n");
  printf("|          1324         |        16,45        | \n");
  printf("|          6548         |        22,37        | \n");
  printf("|          5987         |        25,32        | \n");
  printf("|          7623         |        36,45        | \n");
  printf("==============================================  \n");

  printf("digite o codigo do produto: ");
  scanf("%d", &codigo);
  printf("digite a quantidade de produtos comprados: ");
  scanf("%d", &quantidade);

  switch (codigo){

    case 1001:

      valor_devido = 12.32 * quantidade;
    break;

    case 1324:

      valor_devido = 16.45 * quantidade;
    break;

    case 6548:

      valor_devido = 22.37 * quantidade;
    break;

    case 5987:

      valor_devido = 25.32 * quantidade;
    break;

    case 7623:

      valor_devido = 36,45 * quantidade;
    break;
    
    default:

      printf("voce digitou um codigo invalido \n");
      verifica = false;
  }
  
  if(verifica){
    printf("o cliente deve R$ %.2f reais!", valor_devido);
  } 
}






