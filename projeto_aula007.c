#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
  
  int a;
  int b;

  printf("Digite um valor para A:\n");
  scanf("%d", &a);
  getchar();

  printf("Digite um valor para B:\n");
  scanf("%d", &b);
  getchar();

  if (a < b)
  {
      printf("A menor que B \n");
  }

  else if (b < a)
  {
      printf("B menor que A \n");
  }

  else 
  {
    printf("A e igual a B\n");
  }

  return 0;
}
