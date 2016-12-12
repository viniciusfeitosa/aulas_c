#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	char nome[51], sobrenome[51];

	int comp1, comp2;

	printf("Digite o seu nome: ");
	scanf("%s",&nome);
	comp1 = strlen(nome);

	printf("Digite o seu sobrenome: ");
	scanf("%s",&sobrenome);
	comp2 = strlen(sobrenome);

	strcat(nome," ");
	strcat(nome, sobrenome);

	printf("Ola %s!\n", nome);
	printf("Tamanho do nome %d!\n", comp1+comp2);

    return 0;
}
