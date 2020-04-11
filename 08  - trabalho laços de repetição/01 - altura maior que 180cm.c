#include <stdio.h> //inclusão da biblioteca que contem as funções de printf e scanf

void main (){ //iniciando função principal

  float altura; //declarando variavel de altura como decimal
  int contador = 0, alturaMaior = 0; //declarando varaveis de contagem do laço e altura como inteiras;

  do{
    printf("digite sua altura: "); //solicitando entrada de usuario;
    scanf("%f", &altura); //capturando entrada;

    if(altura > 1.80){ //condicional para caso a altura seja maior que 1.80, entre para a contagem;

      alturaMaior++; //incrementando a variavel contadora da altura > 1.80m;
    }

    contador++; //incrementando a variavel contadora do laço
  }

  while (contador < 10); //condição de parada do laço

  printf("%d pessoas possuem altura superior a 1.80m!", alturaMaior); //mostrando o resultado do programa
}