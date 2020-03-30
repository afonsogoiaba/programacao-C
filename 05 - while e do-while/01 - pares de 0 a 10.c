#include <stdio.h>

void main (){

  int i = 0, par;

  while( i <= 10){
    par = i % 2;

    if (par == 0){

      printf("o numero %d e par \n", i);
    }

    i++;
  }
}