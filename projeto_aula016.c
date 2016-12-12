#include <stdio.h>
#include <stdlib.h>

#define tam  5

int main(int argc, char const *argv[]) {

    int vetor1[tam], vetor2[tam], i, produto=0;

	printf("Entre com um valor no vetor 1\n");
	for (i = 0; i < tam; i++)
	{
		printf("Elemento %d: ", i);
		scanf("%d", &vetor1[i]);
	}

	printf("Entre com um valor no vetor 2\n");
	for (i = 0; i < tam; i++)
	{
		printf("Elemento %d: ", i);
		scanf("%d", &vetor2[i]);
	}

	for (i = 0; i < tam; i++) produto += vetor1[i] * vetor2[i];

	printf("Produto escalar eh igual a %d\n", produto);

    return 0;
}
