#include <stdio.h>

void main(){

  float pi, area;
  int raio;
  pi = 3.14;

  printf("digite o raio do circulo: ");
  scanf("%d", &raio);

  area = pi *(raio * raio);
  printf("a area do circulo eh: %.2f", area);
}
