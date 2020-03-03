#include <stdio.h>

void main (){

  float fahrenheit, celcius;

  printf("digite a temperatura em fahrenheit: ");
  scanf("%f", &fahrenheit);

  celcius = (fahrenheit - 32) / 1.8;
  printf("a temperatura em celcius eh: %.2f", celcius);
}
