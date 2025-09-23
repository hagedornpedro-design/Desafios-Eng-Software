#include <stdio.h>

int main ()
{

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

//inserir o primeiro navio

//loop para inserir a coordenada correta

   int h1; //declara variável horizonal to primeiro navio
 do
 {
    //valida que a coordenada está entre 1 e 10, valores da matriz.
    printf("Insira a coordenada horizontal do 1 navio (de 1 a 10)\n");
    scanf("%d", &h1);
 } while (h1 < 1 || h1 > 10);

 h1 = h1-1; //diminui 1 número para dar match no indice
 
int v1; // declara a variável da coordenada vertical 
do
{
    //valida que a coordenada está entre 1 e 10, valores da matriz.
    printf("Insira a coordenada vertical do 1 navio (de 1 a 10)\n");
    scanf("%d", &v1);
} while (v1 <1 || v1 > 10);

v1 = v1-1; //diminui um número para dar match no indice


//printa a coordenada no indice apenas para validação do programa
printf("Coordenada: h: %d v: %d\n", h1,v1);


//programa para colocar a direção do navio1
int opcao1;
do
{
    //menu suspenso com as opções de direção
    printf("Selecione a direção no barco:\n");
    printf("1. cima\n");
    printf("2. baixo\n");
    printf("3. esquerda\n");
    printf("4. direita\n");
    scanf("%d", &opcao1);

    switch (opcao1)
        {
            case 1:
                //condicional para verificar se ele não extrapola a matriz
                if( (v1-2) < 0)
                {
                    //printando a variável para validar a regra
                    printf("%d\n", v1-2);
                    printf("%d\n", h1);
                    printf("Opção inválida, selecione outra\n");
                } else {
                    printf("Otima escolha!\n");
                    printf("%d\n", v1-2);
                    printf("%d\n", h1);
                }
            break;
            case 2:
                //condicional para verificar se ele nao extrapola a matriz
                if( (v1+2) > 10)
                {
                    //printando a variável para verificar a regra
                    printf("%d\n", v1+2);
                    printf("%d\n", h1);
                    printf("Opção inválida, selecione outra\n");
                }
                break;
            case 3:
                if((h1-2) < 0)
                {
                    //printando a variável para verificar a regra
                    printf("%d\n", h1-2);
                    printf("%d\n", v1);
                    printf("Opção inválida, selecione outra\n");             
                }
            break;
            case 4:
                //
                if((h1+2) > 10)
                {
                    //printando a variável para verificar a regra
                    printf("%d\n", h1+2);
                    printf("%d\n", v1);
                    printf("Opção inválida, selecione outra\n");
                }

            break;
            default:
            printf("Opção inválida\n");

        }
}    while ((((v1-2) >= 0) && ((v1+2) <= 9)) && (((h1-2) >=0) && ((h1+2) <=9)));



/*



//função para imprimir o tabuleiro

    printf("Tabuleiro:\n");


    //definição de algumas variáveis
    int a,x,y;


    
    x = 0; //define o index da coluna como 0
    while (x < 10) //regra para execução do valor das colunas até que seja menor que 10, ou seja 9.
    {
        for ( (y = 0); y <10; y++) //define o valor da linha como 0 e coloca uma regra de adição de 1 até que o valor seja menor que 10, ou seja 9.
            {
                printf("%d ", tabuleiro[x][y]); //imprime as coordenadas do tabuleiro conforme vai adicionando os valores.
            }
            printf("\n"); // pula uma linha
    x++; //após imprimir as 10 posições em linha, adiciona um valor de x e repete.
    }    

*/

}