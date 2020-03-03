#include <stdio.h>

void main (){

  float celcius, fahrenheit;

  printf("digite a temperatura em celcius: ");
  scanf("%f", &celcius);

  fahrenheit = (celcius * 1.8) + 32;
  printf("a temperatura em fahrenheit eh: %.2f", fahrenheit);
}
