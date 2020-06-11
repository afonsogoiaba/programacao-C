/*Faça um programa que leia uma lista de n números e que soma e mostra todos os números cuja
última casa decimal é zero (exemplo: somar números como: 30, 80, 200, 1000).*/

#include <stdio.h> //inclusão da biblioteca que contem printf e scanf

void main(){ //função principal

  int soma, vetor_numeros[10]; //declarando variavel de soma e o vetor de 10 posições

  soma = 0; //atribuindo 0 a soma

  for(int i = 0; i < 10; i++){ //inicio do laço de repetição

    printf("digite um numero: "); //entrada de usuario
    scanf("%d", &vetor_numeros[i]); //guardando o numero dentro da posição do vetor de acordo com o contador do for
  }

  for(int i = 0; i < 10; i ++){ //inicio do laço de repetição

    if(vetor_numeros[i] % 10 == 0){ //condição para que apenas os numeros terminados em zero sejam somados

      printf("o numero %d termina com 0 \n", vetor_numeros[i]); //mostrando os numeros terminados em zero
      soma = soma + vetor_numeros[i]; //realizando a soma

    }
  }

  printf("a soma dos numeros terminados em zero eh: %d", soma); //mostrando o total somado

}