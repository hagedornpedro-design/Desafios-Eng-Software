#include <stdio.h>


//definição do tamanho do tabuleiro
#define linhas 10
#define colunas 10

int main ()

{

    int tabuleiro [linhas][colunas]; //declaração do tabuleiro
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'}; //declaração dos títulos das colunas
    int soma = 0;
    int validador = 0;

    //loop para declarar o tabuleiro vazio

    for(int i = 0; i < linhas; i++)
        {
            for(int j = 0; j < linhas; j++)
                {
                    tabuleiro[i][j] = 0;
                }
        }

        //atribuir posição navio 1 na horizontal
        int v1 = 2; //coordenada vertical
        int h1 = 3; //coordenada horizontal
        

        //loop para preencher no tabuleiro as coordenadas do navio1
        for (int i = 0; i <= 2; i++)//loop externo para percorrer as linhas
            {
                if(tabuleiro[v1][h1+i] != 0)//loop interno para percorrer as colunas
                {
                    printf("Sobreposição de navios em v%d e h%d\n", v1,h1+i); //mensagem de sobreposição
                    validador = 1; //altera o validador para verdadeiro
                    break;//encerra o loop interno
                } if (validador) break;//encerra o loop externo caso encontre o validador verdadeiro
            if(!validador) { //condiciona a saída para o validador falso
                tabuleiro[v1][h1+i] = 3;//validador falso imprime o valor na posição definida
            }
            
                }
            
            
    

        //atribui posição navio 2 na vertical
        int v2 = 5;
        int h2 = 7;
    
        //loop para preencher no tabuleiro as coordenadas do navio2
        for(int i = 0; i <=2; i++) 
            {
                if(tabuleiro[v2+i][h2] != 0)
                {
                    printf("Sobreposição de navio em v%d e h%d\n", v2+i,h2);
                    validador = 1;
                    break;
                } if(validador) break;
                if(!validador) {
                tabuleiro[v2+i][h2] = 3;
                    }
                }
            

        //atribuir posição navio3 na diagonal
        int v3 = 4;
        int h3 = 6;

        //loop para preencher no tabuleiro as coordenadas do navio3
        for(int i = 0; i <=2; i++)
            {
                if(tabuleiro[v3+i][h3-i] != 0)
                {
                    printf("Sobreposição de navio em v%d e h%d\n", v3+i,h3-i);
                    validador = 1;
                    break;
                } if(validador) break;
                if(!validador){
                tabuleiro[v3+i][h3-i] = 3;
                }
            }
        
        //atribuir posição navio4 na diagonal
        int v4 = 7;
        int h4 = 1;

        //loop para preencher no tabuleiro as coordenadas do navio4
        for(int i = 0; i <=2; i++)
            {
                if(tabuleiro[v4-i][h4+i] != 0)
                {
                    printf("Sobreposição de navio em v%d e h%d\n", v4-i,h4+i);
                    validador = 1;
                    break;
                } if(validador)break;
                if(!validador) {
                tabuleiro[v4-i][h4+i] = 3;
                }
            }  

    printf("    ");//espaços para ajustar tabuleiro
    for (int i = 0; i < linhas; i++) //loop para inprimir as letras da coluna
        {
            printf("%c  ", linha[i]); //imprime as letras das colunas
        }
    printf("\n");

    for(int i =0; i < linhas; i++) //loop para imprimir as linhas
        {
            printf("%2d ", i+1); //imprime o número da linha no tabuleiro
            for(int j = 0; j < colunas; j++) //loop para imprimir as colunas
                {
                    printf("%2d ", tabuleiro[i][j]);
                }
            printf("\n");
        }
    
    


    return 0;
    }
