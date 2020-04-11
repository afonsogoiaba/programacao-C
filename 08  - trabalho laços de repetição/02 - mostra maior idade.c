#include <stdio.h> //inclusão da biblioteca que contem as funções de printf e scanf

void main() { //iniciando função principal
  
  int idade, maiorIdade = 0; //declarando varaveis de idade e captura de maior idade como inteiras;

  do{ //execução antes do laço ter a proxima interação

    printf("digite uma idade: "); //entrada de usuario;
    scanf("%d", &idade); //captura da entrada digitada;

    if(idade > maiorIdade){ //condição apra caso a idade seja maior que a ultima digitada, seja capturada;
      
      maiorIdade = idade; //capturando a maior idade digitada;
    }
  }
  
  while(idade != 0); //condição de parada do laço
  printf("a maior idade digitada foi: %d", maiorIdade); //mostrando o resultado do programa
}