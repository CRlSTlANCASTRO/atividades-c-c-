/*

Sistema de banco de dados simples
Seleciona vendedores por região

*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>

int main()
{
    char regiao,vendedor;

    printf("regioes: Leste, Oeste e Norte\n");  
    printf("informe a primeira letra da regiao: ");
    regiao = getche(); // semelhante a função scanf , le um comando do teclado 
    regiao = toupper(regiao); // converte as letras digitadas em maiusculas
    printf("\n");

    switch(regiao)
    {
        case 'L':
        printf("Vendedores: Ricardo, Jose e Mariana\n");
        printf(" informe a primeira letra do nome do vendedor desejado: ");
        vendedor = getche();
        vendedor = toupper(vendedor);
        printf("\n");

        switch(vendedor)
        {
            case 'R':
            printf("Vendas: R$%d\n",5000);
            break;

            case 'J':
            printf("Vendas: R$%d\n",15000);
            break;

            case 'M':
            printf("Vendas: R$%d\n",18000);
            break;

        }//end switch anhinhado
        break;

        case 'O':
        printf("Vendedores: Rafael, Joana e Pedro\n");
        printf(" informe a primeira letra do nome do vendedor desejado: ");
        vendedor = getche();
        vendedor = toupper(vendedor);
        printf("\n");

        switch(vendedor)
        {
            case 'R':
            printf("Vendas: R$%d\n",2000);
            break;

            case 'J':
            printf("Vendas: R$%d\n",8000);
            break;

            case 'P':
            printf("Vendas: R$%d\n",18500);
            break;

        }//end switch anhinhado
        break;

        case 'N':
        printf("Vendedores: Fabiana, Gabriela e Roberto\n");
        printf(" informe a primeira letra do nome do vendedor desejado: ");
        vendedor = getche();
        vendedor = toupper(vendedor);
        printf("\n");

        switch(vendedor)
        {
            case 'F':
            printf("Vendas: R$%d\n",3000);
            break;

            case 'G':
            printf("Vendas: R$%d\n",6000);
            break;

            case 'R':
            printf("Vendas: R$%d\n",1000);
            break;

        }//end switch anhinhado
        break;

    default:
    printf("\nREGIAO NAO ENCONTRADA\n");
    
    }//end switch
    



    system("pause");
}