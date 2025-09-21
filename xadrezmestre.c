#include <stdio.h>


void recursividade_rainha (int n)
{
    if (n > 0)
    {
        printf("Esquerda ");
        recursividade_rainha(n-1);
    }
}

void recursividade_bispo_h (int x)
{
            for (x; x > 0; x--)
            {
                printf("Cima ");
            }

            for(int y = 5; y > 0; y--)
            {

                printf("Direita ");
            }
                

}

void recursividade_cavalo(int c)
{
    for (c; c <= 10; c++)
    {
        printf("Cima ");
        if(c == 2) break;
    }
    printf("Direita ");
}

void recursividade_torre (int n)
{
    if (n > 0)
    {
        printf("Direita ");
        recursividade_torre(n-1);
    }
}


int main () 
{

    int cavalo_h, cavalo_v;
    int bispo_h, bispo_v;
    int rainha_h, rainha_v;
    int torre_h, torre_v;
    int opcao;

    do {

    printf("Selecione uma opção para ver o movimento de cada peça\n");
    printf("1. Cavalo\n");
    printf("2. Bispo\n");
    printf("3. Rainha\n");
    printf("4. Torre\n");
    printf("5. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            printf("Movimento do Cavalo\n");
            cavalo_h = 1;
            recursividade_cavalo(cavalo_h);


            /*codigo antigo cavalo
            for (cavalo_v = 1; cavalo_v <=1; cavalo_v++)
            {
                for(cavalo_h = 1; cavalo_h <=2; cavalo_h++)
                {
                    printf("Baixo, ");
                }
                printf("Esquerda");
            }
            */
            printf("\n");
        break;
        case 2:
            printf("Movimento do Bispo\n");
            bispo_h = 5;
            recursividade_bispo_h(bispo_h);
            
            //codigo antigo
            /*
            for (bispo_v = 1; bispo_v <= 5; bispo_v++)
            {
                printf("Cima ");
            }

            for(bispo_h = 1; bispo_h <= 5; bispo_h++)
            {

                printf("Direita ");
            }
            */
            printf("\n");

        break;
        case 3:
            printf("Movimento da Rainha\n");
            rainha_h = 8;
            recursividade_rainha (rainha_h);
            printf("\n");
            //antigo codigo com for
            /*
            for(rainha_h = 1; rainha_h <= 8; rainha_h++)
            {
                printf("Esquerda ");
            }
            printf("\n");*/
        break;
        case 4:
            printf("Movimento da Torre\n");
            torre_h = 5;
            recursividade_torre(torre_h);

            /*
            for(torre_h = 1; torre_h <= 5; torre_h++)
            {
                printf("Direita ");
            }
                */
            printf("\n");
        break;
        case 5:
            printf("Saindo....\n");
        break;
        default:
        printf("Opção inválida\n");
    }
    }
    while (opcao != 5);


    return 0;
}