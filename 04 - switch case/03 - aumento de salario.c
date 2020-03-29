#include <stdio.h>

void main (){

  int codigo;
  float salario_antigo, salario_novo, diferenca_salario;

  printf("=====================================  \n");
  printf("| CODIGO |   CARGO    |  PERCENTUAL | \n");
  printf("|   101  |  Gerente   |     10%%     | \n");
  printf("|   102  | Engenheiro |     20%%     | \n");
  printf("|   103  |  Tecnico   |     30%%     | \n");
  printf("=====================================  \n");

  printf("digite o salario atual do funcionario: ");
  scanf("%f", &salario_antigo);
  printf("digite o codigo do cargo do funcionario: ");
  scanf("%d", &codigo);


  switch (codigo){
    case 101:

      salario_novo = salario_antigo + (salario_antigo * 0.1);
      break;

    case 102:

      salario_novo = salario_antigo + (salario_antigo * 0.2);
      break;

    case 103:
      
      salario_novo = salario_antigo + (salario_antigo * 0.3);
      break;

    default:

      printf("o codigo digitado -> %d nao pertence aos cargos mostrados na tabela, ou seja, o funcionario recebera 40%% de aumento! \n\n", codigo);
      salario_novo = salario_antigo + (salario_antigo * 0.4);
      break;
  }

  diferenca_salario = salario_novo - salario_antigo;
  printf("parabens! seu salario antigo era R$%.2f reais e agora esta em R$%.2f reais! \n", salario_antigo, salario_novo);
  printf("Houve um aumento de R$%.2f reais!", diferenca_salario);

}