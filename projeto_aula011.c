/*

  Sistema de banco de dados simples

  Seleciona vendedores por região

*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char regiao, vendedor;

    printf("Regioes: Leste, Oeste e Norte\n");
    printf("Informe a primeira letra da regiao:\n");
    scanf("%s", &regiao);
    regiao = toupper(regiao);
    printf("\n");

    switch (regiao)
    {
        case 'L':
            printf("Ricardo, Jose e Mariana\n");
            printf("Informe a primeira letra do vendedor:\n");
            scanf("%s", &vendedor);
            vendedor = toupper(vendedor);
            printf("\n");
            switch (vendedor)
            {
                case 'R':
                    printf("Vendas R$%d\n", 5000);
                    break;
                case 'J':
                    printf("Vendas R$%d\n", 15000);
                    break;
                case 'M':
                    printf("Vendas R$%d\n", 18000);
                    break;
                default:
                    printf("Sua opcao eh invalida\n");
                    break;
            }
            break;
        case 'O':
            printf("Rafael, Joana e Pedro\n");
            printf("Informe a primeira letra do vendedor:\n");
            scanf("%s", &vendedor);
            vendedor = toupper(vendedor);
            printf("\n");
            switch (vendedor)
            {
                case 'R':
                    printf("Vendas R$%d\n", 2000);
                    break;
                case 'J':
                    printf("Vendas R$%d\n", 10000);
                    break;
                case 'P':
                    printf("Vendas R$%d\n", 19000);
                    break;
                default:
                    printf("Sua opcao eh invalida\n");
                    break;
            }
            break;
        case 'N':
            printf("Fabiana, Gabriella e Roberto\n");
            printf("Informe a primeira letra do vendedor:\n");
            scanf("%s", &vendedor);
            vendedor = toupper(vendedor);
            printf("\n");
            switch (vendedor)
            {
                case 'F':
                    printf("Vendas R$%d\n", 3000);
                    break;
                case 'G':
                    printf("Vendas R$%d\n", 6000);
                    break;
                case 'R':
                    printf("Vendas R$%d\n", 1000);
                    break;
                default:
                    printf("Sua opcao eh invalida\n");
                    break;
            }
            break;
        default:
            printf("Sua opcao eh invalida\n");
            break;
    }

    return 0;
}
