#include <stdio.h>

void main(){

  float altura_pedro = 1.10;
  float altura_jose = 1.50;
  float cm_porAno_pedro = 0.03;
  float cm_porAno_jose = 0.02;
  int contador_anos = 0;

  while(altura_jose > altura_pedro){
    
    altura_jose = altura_jose + cm_porAno_jose;
    altura_pedro = altura_pedro + cm_porAno_pedro;
    contador_anos++;
  }

  printf("Pedro sera maior que Jose em %d anos!", contador_anos);
}