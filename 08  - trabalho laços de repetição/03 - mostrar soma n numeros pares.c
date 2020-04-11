#include <stdio.h> //inclusão da biblioteca que contem as funções de printf e scanf

void main(){ //iniciando função principal

  int numero, pares = 0, somaPares = 0; //declarando variaveis como inteiras;

  printf("digite um numero: "); //entrada de usuario;
  scanf("%d", &numero); //captura da entrada de usuario;

  for (int i = 0; i < numero; i++){ //entrada da estrutura de repetição e condição de parada

    pares = pares + 2; // captura dos numeros pares;
    printf("Interacao %d: par = %d \n", i, pares); //mostrando os numeros pares de cada interação do for
    somaPares = somaPares + pares; //somando os numeros pares ao fim de cada interação
  }

  printf("a soma dos pares sera: %d", somaPares); // mostrando o resultado do programa
}