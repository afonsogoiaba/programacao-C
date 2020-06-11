/*Supondo que a população de um país A seja da ordem de 90.000.000 de habitantes com uma taxa anual
de crescimento de 3% e que a população de um país B seja, aproximadamente, de 200.000.000 de habitantes,
com uma taxa anual de crescimento de 1,5%. Faça um programa que calcule e escreva o número de anos
necessários para que a população do país A ultrapasse ou iguale a população do país B, mantidas essas taxas de crescimento.*/

#include <stdio.h> //inclusão da biblioteca que contem printf e scanf

void main(){ //inicio da função principal

  float pop_paisA, pop_paisB; //declando variaveis das populações;
  int contador; //declarando contador em anos

  pop_paisA = 90000000; //adicionado população país A
  pop_paisB = 200000000; //adicionado população país B

  while(pop_paisB >= pop_paisA){ //laço de repetição que finaliza quando população B for menor que a população de A

    pop_paisA = pop_paisA + (pop_paisA * 0.03); //calculo da taxa anual de crescimento - população A
    pop_paisB = pop_paisB + (pop_paisB * 0.015); //calculo da taxa anual de crescimento - população B
    contador++; //incrementando + 1 ano
  }
  
  printf("\n vai demorar %d anos", contador); //mostrando em quantos anos A será maior que B
}