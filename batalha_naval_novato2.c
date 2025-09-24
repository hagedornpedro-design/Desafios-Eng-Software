#include <stdio.h>

int main ()
{




    //declaração do tabuleiro
int tabuleiro[10][10] =
    {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    };
//declaração das linhas do tabuleiro
char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};


//definir navio 1
//declara coordenada navio1
int v1,h1;

v1 = 2;
h1 = 3;

    //loop para preencher as coordenadas do navio1
    for (int i = 0; i <= 2; i++)
        {
            tabuleiro[v1][h1+i] = 3;
        }
//definir navio2
//declarar variável navio2
int v2,h2;
v2 = 5;
h2 = 7;

        //loop para preencher as cooredanadas do navio2
    for(int i = 0 ; i <= 2; i++)
        {
            tabuleiro[v2+i][h2] = 3;
        }

//função para imprimir o tabuleiro

    printf("~~BATALHA NAVAL~~\n");


    printf("   ");
    for (int j = 0; j <10; j++) //loop para inprimir as letras da coluna
        {
            printf("%c ", linha[j]); //imprime as letras das colunas
        }
    printf("\n"); // pula uma linha

    for (int i = 0; i <10; i++) //loop para imprimir o numero das linhas e o tabuleiro
        {
            printf("%2d ", i + 1); //imprime o numero da linha, importante colocar o 2 ntes da definição da variável para ocupar 2 caracteres e não bagunçar a visualiação do tabuleiro
            for (int j = 0; j <10; j++)
                {
                    printf("%d ", tabuleiro[i][j]);
                }
            printf("\n");
        }


 


}