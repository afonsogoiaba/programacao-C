#include <stdio.h>

void main (){
  float horas_trabalhadas, preco_porHora;
  double salario_final;

  printf("digite quantas horas voce trabalhou: ");
  scanf("%f", &horas_trabalhadas);
  printf("digite o valor pago por hora: ");
  scanf("%f", &preco_porHora);

  if(horas_trabalhadas > 40){

    float hora_extra;

    hora_extra = preco_porHora + (preco_porHora * 0.5);
    salario_final = horas_trabalhadas * preco_porHora;
    printf("seu salario sofreu um adicional de %.2f e fechou o mes em %2.f", hora_extra, salario_final);
  }

  else{
    salario_final = horas_trabalhadas * preco_porHora;
    printf("seu salario fechou o mes em %2.f", salario_final);
  }
}
