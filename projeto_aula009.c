#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

  for(int i = 0; i < 10; i++)
  {
    printf("Linha incremento %d\n", i);
  }


  for(int i = 9; i >= 0; i--)
  {
    printf("Linha decremento %d\n", i);
  }
  
  return 0;
}
