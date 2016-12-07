#include <stdio.h>
#include <stdlib.h>

void display();
int leitura();
void square();



int main(int argc, char *argv[])
{
  int valor;

  for(display(); valor = leitura(); display())
    {
      square(valor);
    }
  
  return 0;
} // end main



void display()
{
  printf("Digite zero para sair\n");
  printf("ou informe um inteiro para calcular o seu quadrado:\n");
} // end display



int leitura()
{
  int t;
  scanf("%d", &t);
  return t;
} // end leitura



void square(int numero)
{
  printf("%d\n", numero*numero);
} // end square
