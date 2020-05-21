/*Faça um programa que, dado um inteiro positivo n, calcula e mostra o valor da soma da seguinte série:
SOMA = (n / 1) + ((n - 1 ) / 2) + ((n - 2) / 3) + ((n - 3) / 4) ... + (1 / n)
*/

#include <stdio.h> //inclusao da biblioteca que contem as funções printf e scanf

void main(){ //inicio da função principal

  int numero, contador; //declarando variaveis inteiras
  float soma, auxiliar; //declarando varaiveis decimais

  printf("digite um numero: "); //solicitando entrada de usuario
  scanf("%d", &numero); //capturando o que foi digitado pelo usuario

  soma = 0; //atribuindo 0 para posterior inserção de valores
  contador = 1; //inicio do contador com 1 para que seja feita a divisão correta
  auxiliar = numero; //variavel auxiliar recebendo o valor do numero digitado para realizar o decremento na soma

  while(contador <= numero){ //inicio da estrutura de repetição

    soma = soma + (auxiliar / contador); // somando os valores de cada interação
    auxiliar --; //atribuindo -1 para o numero digitado a cada interação
    contador ++; //atribuindo +1 para a variavel contadora a cada interação

    printf("soma: %.2f  | decremento:  %.0f | incremento: %d \n", soma, auxiliar, contador); //mostrando o processo de soma
  }

  printf("\n o valor do somatorio sera: %.2f", soma); //exibindo o resultado final
}