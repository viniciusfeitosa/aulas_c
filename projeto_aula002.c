#include <stdio.h>
#include <stdlib.h>

// Este é o projeto da aula2
// do curso de linguagem C

int main(int argc, char *argv[])
{
  int numero; // Isto é uma variável 
  
  printf("Digite um numero: \n");
  scanf("%d", &numero);
  getchar();

  printf("O numero eh igual a: %d \n", numero);
  
  return 0;
}
