#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  int opcao;
  int valor;

  printf("Conversor bases numericas\n");
  printf("1: decimal para hexadecimal\n");
  printf("2: hexadecimal para decimal\n");
  printf("\n\nInforme a opcao:");
  scanf("%d", &opcao);
  getchar();

  if(opcao == 1)
  {
    printf("Informe o valor em decimal:\n");
    scanf("%d", &valor);
    getchar();
    printf("%d em hexadecimal eh: %x\n", valor, valor);
  }

  else if(opcao == 2)
  {
    printf("Informe o valor em hexadecimal:\n");
    scanf("%x", &valor);
    getchar();
    printf("%x em decimal eh: %d\n", valor, valor);
  }

  else printf("Sua opcao eh invalida\n");

  return 0;
}
