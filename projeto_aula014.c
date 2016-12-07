#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{

	int opcao= 1;
	do
	{
		printf("Digite a opcao: 1 - sim, 2 - nao\n");
		scanf("%d", &opcao);

	} while(opcao < 1 || opcao > 2);

	return 0;
}
