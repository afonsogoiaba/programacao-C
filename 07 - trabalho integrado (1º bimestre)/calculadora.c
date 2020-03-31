#include <stdio.h> //incluindo a biblioteca que contem as funções printf/scanf

void main (){ //inicializando função principal

  float numero1, numero2; //declarando variaveis reais;
  double resultado; //declarando uma variavel com maior espaço alocado em memoria
  int operacao = 0, contador = 1; //declarando variaveis de operacao e controle de laço

  do{ //executado antes do while propriamente dito
    printf("\n\n=========CALCULADORA========== \n"); //tabela de operações da calculadora
    printf("|   CODIGO   |    OPERACAO    | \n"); //tabela de operações da calculadora
    printf("|     1      |     Adicao     | \n"); //tabela de operações da calculadora
    printf("|     2      |    Subtracao   | \n"); //tabela de operações da calculadora
    printf("|     3      |  Multiplicacao | \n"); //tabela de operações da calculadora
    printf("|     4      |     Divisao    | \n"); //tabela de operações da calculadora
    printf("|     5      |   Potenciacao  | \n"); //tabela de operações da calculadora
    printf("|     0      |      Sair      | \n"); //tabela de operações da calculadora
    printf("=============================== \n"); //tabela de operações da calculadora

    printf("digite a operacao que deseja fazer: "); //mensagem solicitando de entrada de usuario
    scanf("%d", &operacao); //capturando entrada para a variavel de operação (codigo da operação)

    resultado = 1; /*atribuindo 1 para o resultado de todas as operações no fim do laço, para que
    não interfira nas operações seguintes a cada interação.*/

    if(operacao != 0){ //verificação para não caso seja o codigo de saida, execute as solicitações de entrada de valores

      printf("digite o primeiro numero: "); //solicita entrada de um valor numerico
      scanf("%f", &numero1); //captura o primeiro valor numerico
      printf("digite o segundo numero: "); //solicita o segundo valor numerico
      scanf("%f", &numero2); //captura o segundo valor numerico
    }

    else{ /*caso o valor da operação seja 0, ou seja, codigo de saida,
    o programa para a execução e pula para fora do parametro "DO"*/
      break; //parametro de parada;
    }

    switch(operacao){ //inicio das estrutura de verificação de caso

      case 1: //caso seja adição

        resultado = numero1 + numero2; //executa a adição e guarda na variavel de resultado
      break; //comando de parada, matando a função e pulando as demais linhas de codigo da mesma

      case 2: //caso seja subtracao

        resultado = numero1 - numero2; //executa a subtração e guarda na variavel de resultado
      break; //comando de parada, matando a função e pulando as demais linhas de codigo da mesma

      case 3: //caso seja multiplicação

        resultado = numero1 * numero2; //executa a multiplicação e guarda na variavel de resultado
      break; //comando de parada, matando a função e pulando as demais linhas de codigo da mesma

      case 4: //caso seja divisão

        resultado = numero1 / numero2; //executa a multiplicação e guarda na variavel de resultado
      break; //comando de parada, matando a função e pulando as demais linhas de codigo da mesma

      case 5: //caso seja potenciação

        while(contador <= numero2){ /*inicio do laço para verificando se as interações são <= ao numero do expoente*/
          resultado = resultado * numero1; //resultado recebe ele mesmo * pelo numero da base
          contador++; //variavel de contagem de interação é incrementada em +1 a cada vez que o laço é executado
        }
      break; //comando de parada, matando a função e pulando as demais linhas de codigo da mesma
    }
    
    printf("\n\n %g", resultado); //ao fim de tudo é exibida a mensagem com o resultado da operação selecionada
  }

  while(operacao != 0); //verificação do laço para que apenas quando o numero 0 for digitado, sua execução pare
} // fim da função principal