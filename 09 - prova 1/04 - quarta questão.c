/*Faça um programa que, dada uma sequência de números inteiros terminada pelo valor 0 (zero),
determina e mostra quantos segmentos de números iguais consecutivos compõem essa sequência.
Obs: o valor 0 não pode constar como uma sequência. Exemplo: A sequência 5, 2, 2, 4, 4, 4, 4, 1, 1, 0
é formada por 5 segmentos de números iguais.*/

#include <stdio.h> //inclusão da bibliteca que contem as funções printf e scanf

void main (){ //inicio da função principal

  int numero, anterior, contador; //declarando variavel inteira
  anterior = 0;
  contador = 0;

  do{ //executado antes do while

    printf("digite um numero: "); //solicita entrada de usuario
    scanf("%d", &numero); //captura o valor digitado para a lista

    if(numero == anterior){
      
      contador++;
      anterior = 0;
      printf("anterior: %d || numero: %d || contador: %d \n", anterior, numero, contador);
    }

    anterior = numero;
  }


  while(numero != 0); //o laço é encerrado quando digitado zero

  printf("o numero de segmentos sao: %d", contador);
}