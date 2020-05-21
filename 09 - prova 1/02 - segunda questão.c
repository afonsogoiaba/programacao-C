/*Uma loja de materiais de construção pretende promover uma liquidação de seu estoque com descontos variáveis
de acordo com o produto. Para isto, a loja necessita de um programa para ler o código e o valor do produto e,
em seguida, calcular e mostrar o valor do produto com o devido desconto, conforme apresenta a tabela abaixo.
Dessa forma, faça o programa que atenda a necessidade da loja.(Obs: usar a estrutura Switch, caso contrário a
solução será desconsiderada.)*/

/*||  CODIGO DO PRODUTO  ||  DESCONTO (%) ||
  ||         1001        ||      22%      ||
  ||         1254        ||      30%      ||
  ||         1548        ||      32%      ||
  ||         1687        ||      37%      ||
  ||         1923        ||      40%      ||*/     


#include <stdio.h> //inclusão da biblioteca que contem as funções printf e scanf

void main(){ //iniciando a função principal

  int codigo; //declarando variavel inteira
  float valorProduto, desconto, valorFinal; //declarando variaveis decimais

  printf("digite o codigo do produto: "); //entrada de usuario solicitada
  scanf("%d", &codigo); //captura do valor digitado
  printf("digite o valor do produto: "); //entrada de usuario solicitada
  scanf("%f", &valorProduto); //captura do valor digitado

  desconto = 0; //atribuindo zero para posterior inclusão de valores às variaveis
  valorFinal = 0; //atribuindo zero para posterior inclusão de valores às variaveis
  switch (codigo){ //inicio da estrutura de comparação

    case 1001: //caso o codigo seja 1001
      desconto = valorProduto * 0.22; //aplica desconto de 22%
    break; //para a execução da estrutura de comparação

    case 1254: //caso o codigo seja 1254

      desconto = valorProduto * 0.30; //aplica desconto de 30%
    break; //para a execução da estrutura de comparação

    case 1548: //caso o codigo seja 1548

      desconto = valorProduto * 0.32; //aplica desconto de 32%
    break; //para a execução da estrutura de comparação

    case 1687: //caso o codigo seja 1687

      desconto = valorProduto * 0.37; //aplica desconto de 37%
    break; //para a execução da estrutura de comparação

    case 1923: //caso o codigo seja 1923

      desconto = valorProduto * 0.40; //aplica desconto de 40%
    break; //para a execução da estrutura de comparação
    
    default: //caso o codigo não seja nenhum dos mencionados nos casos
      
      printf("para o codigo digitado, o valor nao se altera! \n"); //exibe a mensagem para o usuario
      break; //para a execução da estrutura de comparação
  }

  valorFinal = valorProduto - desconto; //aplica o desconto no valor do produto
  printf("o valor final do produto sera: %.2f", valorFinal); //mostra o valor final para o usuario

}