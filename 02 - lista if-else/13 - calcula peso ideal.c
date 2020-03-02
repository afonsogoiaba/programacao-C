#include <stdio.h>
#include <conio.h>

void main (){

  char sexo;
  float altura, peso;

  printf("digite seu sexo (H/M): ");
  sexo = getche();

  printf("\n digite sua altura: ");
  scanf("%f", &altura);

  if(sexo == 'H'){

    peso = (72.7 * altura) - 58;
    printf("seu peso ideal eh %.2f", peso);
  }

  else{
    peso = (62.1 * altura) - 44.7;
    printf("seu peso ideal eh %.2f", peso);
  }
}
