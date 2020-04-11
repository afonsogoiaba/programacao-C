#include <stdio.h> //inclusão da biblioteca que contem as funções de printf e scanf

void main (){ //declarando variaveis como inteiras;

  int numeroFace, cont, contador_face1, contador_face2, contador_face3, contador_face4, contador_face5, contador_face6;
  //declarando variaveis inteiras;

  cont = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido
  contador_face1 = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido
  contador_face2 = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido
  contador_face3 = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido
  contador_face4 = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido
  contador_face5 = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido
  contador_face6 = 0; //atribuindo valor 0 para que a variavel possua algum valor antes de ter algum outro valor atribuido

  do{ //executado antes do laço ser iniciado

    printf("digite o resultado do lancamento: "); //entrada de usuario
    scanf("%d", &numeroFace); //captura da entrada

    switch(numeroFace){ //inicio da estrutura de verificação variando de acordo com o numero digitado

      case 1: //caso seja 1

        contador_face1++; //atribui +1 ao contador da face que possui o numero 1 no dado
      break; //pausa a verificação

      case 2: //caso seja 2

        contador_face2++; //atribui +1 ao contador da face que possui o numero 2 no dado
      break; //pausa a verificação

      case 3: //caso seja 3
      
        contador_face3++; //atribui +1 ao contador da face que possui o numero 3 no dado
      break; //pausa a verificação

      case 4: //caso seja 4
        
        contador_face4++; //atribui +1 ao contador da face que possui o numero 4 no dado
      break; //pausa a verificação

      case 5: //caso seja 5
      
        contador_face5++; //atribui +1 ao contador da face que possui o numero 5 no dado
      break; //pausa a verificação
      
      case 6: //caso seja 6

        contador_face6++; //atribui +1 ao contador da face que possui o numero 6 no dado
      break; //pausa a verificação

      default: //caso não seja nenhum numero das faces do dado
        printf("numero da face incorreto! \n"); //exibe a mensagem
        cont--; //retira uma interação do laço para que sejam digitados realmente 15 numeros validos
    }
    
    cont++; //incrementa a variavel contadora do laço
  }

  while(cont < 15); //condição de parada do laço

  printf("o lado com o numero 1 apareceu %d vezes! \n", contador_face1); //exibe o numero de vezes que a fase 1 aparece
  printf("o lado com o numero 2 apareceu %d vezes! \n", contador_face2); //exibe o numero de vezes que a fase 2 aparece
  printf("o lado com o numero 3 apareceu %d vezes! \n", contador_face3); //exibe o numero de vezes que a fase 3 aparece
  printf("o lado com o numero 4 apareceu %d vezes! \n", contador_face4); //exibe o numero de vezes que a fase 4 aparece
  printf("o lado com o numero 5 apareceu %d vezes! \n", contador_face5); //exibe o numero de vezes que a fase 5 aparece
  printf("o lado com o numero 6 apareceu %d vezes! \n", contador_face6); //exibe o numero de vezes que a fase 6 aparece
}