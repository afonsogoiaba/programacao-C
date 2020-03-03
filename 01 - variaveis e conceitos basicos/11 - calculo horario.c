#include <stdio.h>

void main(){

  int hora, minutos, segundos, horario_quePassou;

  printf("digite que horas sao: ");
  scanf("%d", &hora);
  printf("digite os minutos: ");
  scanf("%d", &minutos);
  printf("digite os segundos: ");
  scanf("%d", &segundos);

  horario_quePassou = (hora*360) + (minutos*60) + segundos;
  printf("se passaram %d segudos",horario_quePassou);
  }
