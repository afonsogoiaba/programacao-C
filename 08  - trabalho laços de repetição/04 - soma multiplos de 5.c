#include <stdio.h> //inclusão da biblioteca que contem as funções de printf e scanf

void main (){ //declarando a função principal;

  int numero, somaMultiplos = 0; //declarando variaveis como inteiras;

  do{ //iniciado antes da execução de cada interação do laço

    printf("digite um numero: "); //entrada de usuario;
    scanf("%d", &numero); //captura da entrada digitada;

    if(numero % 5 == 0){ //condicional para capturar apenas os multiplos de 5

      somaMultiplos = somaMultiplos + numero; // somando cada multiplo de 5
    }

  }

  while(numero != 0); //condição de parada do laço
  printf("a soma dos multiplos de 5 sera: %d", somaMultiplos); //resultado do programa.
}