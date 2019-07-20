#include <stdio.h>
int main ()
{
    const int linha = 4;
    const int coluna = 6;
    int matrizA[linha][coluna];
    int i, j, opcao;
    float soma;
    opcao = 9;
 
    int preenchimento ()
    {
        for (i=0;i<linha;i++)
        {
        for (j=0;j<coluna;j++)
        {
        printf("\nDigite as vendas da semana %d, dia %d: ", i+1, j+1);
        scanf("%d", &matrizA[i][j]);
        }
        }
    }
    
    int imprimir_valores ()
    {
        for (i=0;i<linha;i++)
        {
        for (j=0;j<coluna;j++)
        {
        printf("\nAs vendas da semana %d, dia %d foram de: %d\n", i+1, j+1, matrizA[i][j]);
        }
        }
    }
    
    int media_valores ()
    {
        soma = 0;
        for (i=0;i<linha;i++)
        {
        for (j=0;j<coluna;j++)
        {
        soma = soma + matrizA[i][j];
        }
        }
        printf("\nA média das vendas foi de %f por dia", soma/24);
    }
    
    printf("\nBem-Vindo ao sistema de Vendas\n");
    
    while (opcao != 0) {
        printf("\nO que gostaria de fazer?");
        printf("\n1 - Preencher Valores");
        printf("\n2 - Imprimir Valores");
        printf("\n3 - Ver Média das Vendas do mês");
        printf("\n0 - Sair\n");
        scanf("%d", &opcao);
        if (opcao == 1) {
            preenchimento();
        }
            else {
                if (opcao == 2) {
                    imprimir_valores();
                }
                else {
                    if (opcao == 3) {
                        media_valores();
                    }
                    }
            }
    }
    return (0);
}