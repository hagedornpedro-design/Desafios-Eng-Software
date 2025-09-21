#include <stdio.h>

int main () 
{

    int cavalo_h, cavalo_v;
    int bispo_h, bispo_v;
    int rainha_h, rainha_v;
    int opcao;

    do {

    printf("Selecione uma opção para ver o movimento de cada peça\n");
    printf("1. Cavalo\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Movimento do Cavalo\n");
            for (cavalo_v = 1; cavalo_v <=1; cavalo_v++)
            {
                for(cavalo_h = 1; cavalo_h <=2; cavalo_h++)
                {
                    printf("Baixo, ");
                }
                printf("Esquerda");
            }
            printf("\n");
        break;
        case 2:
            printf("Movimento do Bispo\n");
            for (bispo_v = 1; bispo_v <= 5; bispo_v++)
            {
                printf("Cima ");
            }

            for(bispo_h = 1; bispo_h <= 5; bispo_h++)
            {

                printf("Direita ");
            }
            printf("\n");

        break;
        case 3:
            printf("Movimento da Rainha\n");
            for(rainha_h = 1; rainha_h <= 8; rainha_h++)
            {
                printf("Esquerda ");
            }
            printf("\n");
        break;
        case 4:
            printf("Saindo....\n");
        break;
        default:
        printf("Opção inválida\n");
    }
    }
    while (opcao != 4);


    return 0;
}