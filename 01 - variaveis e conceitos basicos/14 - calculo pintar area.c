#include <stdio.h>
void main (){

  float latas_necessarias, custo_pintura, comprimento, largura, area;
  const float preco_lataTinta = 25.00;
  const float litro_porLata = 3.6;

  printf("digite o comprimento do local a ser pintado: ");
  scanf("%f", &comprimento);
  printf("digite a largura do local a ser pintado: ");
  scanf("%f", &largura);

  area = comprimento * largura;
  latas_necessarias = (area /13) / litro_porLata;

  custo_pintura = latas_necessarias * preco_lataTinta;
  printf("as latas necessarias sao %.2f e o custo eh: %.2f", latas_necessarias, custo_pintura);
}
