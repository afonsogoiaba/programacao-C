#include <stdio.h>

void main(){

  int inicio_fahrenheit = 50;
  int fim_fahrenheit = 70;
  float celcius;

  printf("======================================== \n");
  printf("|  GRAUS FAHRENHEIT  |  GRAUS CELCIUS   | \n");
  
  while(inicio_fahrenheit <= fim_fahrenheit){

    celcius = (inicio_fahrenheit - 32) / 1.8;
    printf("|         %d         |      %.2f       | \n", inicio_fahrenheit, celcius);
    inicio_fahrenheit++;
  }
}