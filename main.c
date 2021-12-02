//Programa em C para simular uma calculadora

#include <stdio.h>

int main(void) {
  float n1,n2, soma, sub, mult, div;
  char simbolo;
  printf("\nCalculadora em C\n");
  //escolha dos números e operação que vai realizar
  printf("\nDigite o primeiro número da operação: ");
  scanf("%f", &n1);
  printf("\nDigite o caracter da operação (+, -, * ou /): ");
  scanf(" %c", &simbolo); 
  printf("\nDigite o segundo número da operação: ");
  scanf("%f", &n2);
  //ações que vão ser realizadas no switch, a cada escolha de uma operação
  switch (simbolo)
  {
    case '+':
    soma=n1+n2;
    printf ("\nSeu calculo é igual a: %.2f", soma);
    break;
    case '-':
    sub=n1-n2; 
    printf("\nSeu calculo é igual a: %.2f", sub);
    break;
    case '*':
    mult=n1*n2;
    printf("\nSeu calculo é igual a: %.2f", mult);
    break;
    case '/':
    div=(n1/n2);
    printf("\nSeu calculo é igual a: %.2f", div);
    break;  
  }
  return 0;
}