/*Uma loja que trabalha com crediário funciona da seguinte maneira: se o pagamento ocorre
até o dia do vencimento, o cliente ganha 10% de desconto e é avisado de que o pagamento
está em dia. Se o pagamento é realizado até cinco dias após o vencimento, o cliente perde
o desconto e, se o pagamento atrasa mais de cinco dias, é cobrada uma multa de 2% por cada
dia de atraso. Faça um programa que leia o dia do vencimento, o dia do pagamento e o valor
da prestação e calcule o valor a ser pago pelo cliente, exibindo as devidas mensagens.
Obs.: Suponha que todo vencimento ocorre até o dia dez de cada mês e os clientes nunca deixam
para pagar no mês seguinte.*/

#include <stdio.h> //inclusão biblioteca que contem as funções printf e scanf

void main(){ //iniciando a função principaç

  int diaVencimento, diaPagamento, atraso; //declarando variaveis inteiras
  float valorPrestacao, valor_a_pagar, multa; //declarando variaveis decimais

  printf("digite o dia do vencimento: \n"); //entrada de usuario
  scanf("%d", &diaVencimento); //capturando a entrada digitada
  printf("digite o dia do pagamento: \n"); //entrada de usuario
  scanf("%d", &diaPagamento); //capturando a entrada digitada
  printf("digite o valor da prestacao: \n"); //entrada de usuario
  scanf("%f", &valorPrestacao); //capturando a entrada digitada

  valor_a_pagar = 0; //setando valor 0 para posterior atribuição de valores
  atraso = 0; //setando valor 0 para posterior atribuição de valores
  multa = 0; //setando valor 0 para posterior atribuição de valores

  if(diaPagamento <= diaVencimento){ //inicio da estrutura de comparação para verificar se o dia de pagamento é menor que o vencimento da conta

    valor_a_pagar = valorPrestacao - (valorPrestacao * 0.1); //atribuindo 10% de desconto para pagamento antes do vencimento
    printf("Parabens! seu pagamento esta em dia e foi realizado antes do dia do vencimento! \n"); //exibindo mensagem para o usuario
  }

  else if (diaPagamento <= (diaVencimento + 5)){ //inicio da estrutura de comparação para verificar se houve atraso no pagamento de até 5 dias
    
    valor_a_pagar = valorPrestacao; //atribuindo apenas o valor da conta na variavel de pagamento
    printf("voce pagou com ate 5 dias de atraso, portanto perdeu o desconto mas nao sofreu multa. \n"); //exibindo mensagem para o usuario
  }

  else{ //caso não seja nenhuma das condições acima, quer dizer que o pagamento sofreu atraso maior que 5 dias

    atraso = diaPagamento - diaVencimento; //contando quantos dias de atraso a conta teve
    multa = (valorPrestacao * 0.2) * atraso; //aplicando multa de 2% por dia de atraso no valor da conta
    valor_a_pagar = multa + valorPrestacao; //somando a multa com o valor original da conta

    printf("voce atrasou o pagamento e por isso tera de pagar a conta com multa! \n"); //exibindo mensagem para o usuario
  }

  printf("o valor a ser pago sera: %.2f", valor_a_pagar); //exibindo mensagem para o usuario
}
