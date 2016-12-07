#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i = 0, j = 1, resposta;
	int erros = 0, acertos = 0;
	char opcao;

inicio:
	for (j = 1; j < 10; j++)
	{
		printf("Qual a resposta %d + %d?\n", i, j);
		scanf("%d", &resposta);
		if (resposta != (i + j))
		{
			erros++;
			printf("Resposta errada!\n");
		}
		else
		{
			acertos++;
			printf("Responta correta!\n");
		}
	} // end for

	printf("Acertos %d\n", acertos);

meio:
	printf("Continuar respondendo: s - sim, n - nao\n");
	scanf("%s", &opcao);
	opcao = toupper(opcao);
	printf("\n");

	switch (opcao)
	{
		case 'S':
			i++;
			goto inicio;
			break;
		case 'N':
			i++;
			goto fim;
			break;
		default:
			printf("Opcao invalida\n");
			goto meio;
			break;
	}

fim:
	printf("Obrigado e ate a proxima\n");

	return 0;
}
