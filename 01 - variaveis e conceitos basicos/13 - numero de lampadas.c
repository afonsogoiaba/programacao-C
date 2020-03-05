#include <stdio.h>

void main(){

  const int potencia_porMetro = 20;
  int potencia_lampada;
  float largura, comprimento, area, numero_deLampadas, potencia_total;

  printf("digite a potencia das lampadas utilizadas em watts: ");
  scanf("%d", &potencia_lampada);
  printf("digite a largura do comodo: ");
  scanf("%f", &largura);
  printf("digite o comprimento do comodo: ");
  scanf("%f", &comprimento);

  area = comprimento * largura;
  potencia_total = potencia_lampada / potencia_porMetro;
  numero_deLampadas = area / potencia_total;

  printf("o ideal para %.2f metros eh: %.2f", area, numero_deLampadas);

}
