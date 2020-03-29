#include <stdio.h>
#include <stdbool.h>

void main (){

  int codigo, quantidade;
  float conta_cliente;
  bool verifica = false; 

  printf("=====================CARDAPIO================= \n");
  printf("|   ESPECIFICACAO   |   CODIGO   |   PRECO   | \n");
  printf("|  Cachorro quente  |     100    |    9,50   | \n");
  printf("|       Bauru       |     101    |    8,50   | \n");
  printf("|     Hanburguer    |     102    |    7,00   | \n");
  printf("|   Cheeseburguer   |     103    |    8,00   | \n");
  printf("|    Refrigerante   |     104    |    5,50   | \n");
  printf("============================================== \n");

  printf("digite o codigo do lanche: ");
  scanf("%d", &codigo);
  printf("digite a quantidade de lanches comprados: ");
  scanf("%d", &quantidade);

  switch (codigo){

    case 100:

      conta_cliente = 9.50 * quantidade;
      verifica = true;
    break;

    case 101:

      conta_cliente = 8.50 * quantidade;
      verifica = true;
    break;

    case 102:

      conta_cliente = 7.00 * quantidade;
      verifica = true;
    break;

    case 103:

      conta_cliente = 8.00 * quantidade;
      verifica = true;
    break;

    case 104:

      conta_cliente = 5.50 * quantidade;
      verifica = true;
    break;
    
    default:

      printf("voce digitou um codigo invalido \n");
  }
  
  if(verifica){
    printf("parabens pela compra de R$ %.2f reais!", conta_cliente);
  } 
}






