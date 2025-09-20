#include <stdio.h>

int main ()
{

    // declaração das variáveis
int torre, bispo, rainha, opcao;

//menu para mostrar as opções de movimentos
printf("Selecione uma peça para movimentar\n");
printf("1. Torre\n");
printf("2. Bispo\n");
printf("3. Rainha\n");
scanf("%d", &opcao);

switch (opcao)
{
    //movimento torre
    case 1:
        printf("Você escolheu a torre\n");
        printf("Movimento da torre:\n");
        for (torre = 0; torre < 5; torre++)
        {
        printf("Torre moveu 1 casa para a direita\n");
        }
    break;
    //movimento bispo
    case 2:
        printf("Você escolheu o bispo\n");
        printf("Movimento do bispo:\n");
        bispo = 0;
        while (bispo < 5)
            {
                printf("Bispo moveu uma casa na diagonal cima, direita\n");
                bispo++;
            }

    break;
    //movimento rainha
    case 3:
        printf("Você escolheu a rainha\n");
        printf("Movimento da rainha:\n");
        rainha =0;
        do
        {
            printf("A rainha moveu 1 casa para a esquerda.\n");
            rainha++;
        } while (rainha <8);
        
        break;
    //opção inválida
    default:
    printf("Opção inválida\n");
}


    return 0;
}
