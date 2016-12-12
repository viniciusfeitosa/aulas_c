#include <stdio.h>
#include <stdlib.h>


void codifica();

int main(int argc, char *argv[])
{
	printf("Entrar com letrar para codificar.\n");
	printf("Digite $ para sair.\n");
    codifica();

    return 0;
}

void codifica()
{
	char ok = 0, ch;
	while(!ok)
	{
        scanf("%c", &ch);
        if (ch == '$') {
            ok = 1;
            continue;
        }
        printf("%c\n", ch + 2);
	}
}
