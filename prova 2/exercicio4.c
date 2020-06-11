/*Faça um programa para ler uma matriz 5x5 de números inteiros e ler um número inteiro x.
A seguir, o algoritmo deve multiplicar os elementos da terceira linha da matriz por x e
exibir a matriz modificada.*/

#include <stdio.h> //inclusão da biblioteca que contem scanf e printf

void main(){ //inicio da função principal

  int numero, matriz5x5[5][5], auxiliar; //inicio das variaveis inteiras e da matriz 5x5
  const linha = 2; //declarando linha que será alterada sendo ela 2+1 = 3 pois o 0 conta como 1 posição

  printf("digite o numer a ser multiplicado: "); //entrada de usuario
  scanf("%d", &numero); //captura da entrada digitada

  for(int i = 0; i < 5; i++){ //inicio do laço de repetição para a linha da matriz

    for(int j = 0; j < 5; j++){ //inicio do laço para a coluna da matriz

      printf("linha %d || coluna %d: ", i+1, j+1); //mostrando em qual linha/coluna o usuario está colocando a entrada
      scanf("%d", &matriz5x5[i][j]); //capturando a entrada

    }
  }
  
  for(int j = 0; j < 5; j++){ //inicio do laço de repetição para as colunas
      
    auxiliar = matriz5x5[linha][j]*numero; //colocando o numero alterado da linha 3 em uma variavel auxiliar
    matriz5x5[linha][j] = auxiliar; //alterando na matriz o numero multiplicado
  };
  
  printf("matriz alterada \n \n \n"); //mostrando a matriz

  for(int i = 0; i < 5; i++){ //inicio do laço de repetição para as linhas da matriz

    for(int j = 0; j < 5; j++){ //inicio do laço de repetição para as colunas da matriz

      printf("%d \t", matriz5x5[i][j]); //mostrando cada posição da matriz
    }

    printf("\n");//pulando para uma nova linha
  }
}