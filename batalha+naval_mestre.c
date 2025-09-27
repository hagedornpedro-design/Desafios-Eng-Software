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

//usar habilidades
/*fazer um menu para inserir as habilidades, serão 3 opções, 1. cone, 2. cruz e 3. octaedro
para cada habilidade escolhida, deve ser permitido a entrada de uma coordenada inicial
o cone, será projetado sempre na direção inferior
a cruz tera o ponto central definido pelo usuário
o octaedro terá o ponto central definido pelo usuário
a impressão do uso da habilidade no tabuleiro será o valor 2
os locais de impacto serão impressos como 5*/

int opcao1;
int cone_v,cone_h;
int cruz_v,cruz_h;
int octa_v,octa_h;
int validador_cruz = 0;
int validador_cone = 0;
int validador_octa = 0;

printf("Escolha uma habilidade:\n");
printf("1. Cruz\n");
printf("2. Cone\n");
printf("3. Octaedro\n");
scanf("%d", &opcao1);

switch(opcao1)
            {
                case 1:
                    printf("Insira a coordenada vertical (1 a 10):\n"); //inserir a coordenada vertical
                    scanf("%d", &cruz_v); //armazena a variável
                    cruz_v = cruz_v -1; //transforma o input em índice
                    if(cruz_v < 0 || cruz_v > colunas) // valida se está dentro do tabuleiro
                        {
                            printf("Opção inválida\n"); //mensagem para cooredana inválida
                            validador = 1; //altera o validador para verdadeiro
                            break; //encerra loop interno
                        } if (validador) break; //encerra loop externo
                    if(!validador) //condicional caso o validador seja falso
                    {
                    printf("Insira a coordenada horizontal (1 a 10):\n"); // insere a coordenada horizontal
                    scanf("%d", &cruz_h);//armazena a variável
                    cruz_h = cruz_h - 1;//transforma em índice
                    if(cruz_h < 0 || cruz_h > colunas)//valida se está dentro do tabuleiro
                        {
                            validador = 0; //reseta a variável de validação
                            printf("Opção inválida\n");//mensagem coordenada inválida
                            validador = 1; //altera o validador para verdadeiro
                            break;//encerra loop interno
                        } if(validador) break;//encerra loop externo
                    } if(!validador)//condicional para o validador falso
                        {
                            for(int i = -1; i <= 1; i++) //inicia loop para montar a linha vertical da cruz
                            {
                                if(tabuleiro[cruz_v+i][cruz_h] == 3) //valida se alguma coordenada tem navio
                                    {
                                        tabuleiro[cruz_v+i][cruz_h] = 5; //coordenadas com navio altera para 5, colisão
                                    } else 
                                    {tabuleiro[cruz_v+i][cruz_h] = 2;} //coordenadas sem navio altera para 2, habilidade
                            }
                            for (int j = -2; j <=2; j++) //inicia loop para montar a linha horizontal da cruz
                                {
                                    if(tabuleiro[cruz_v][cruz_h+j] == 3)//valida coordenadas com navio
                                        {
                                            tabuleiro[cruz_v][cruz_h+j] = 5;//coordenadas com navio altera para 5, colisão
                                        } else
                                        {tabuleiro[cruz_v][cruz_h+j] = 2;} //coordenadas sem navio altera para 2, habilidade
                                }
                        }
                break;
                case 2:
                    printf("Insira a coordenada vertical (1 a 10):\n"); //inserir a coordenada vertical
                    scanf("%d", &cone_v); //armazena a variável
                    cone_v = cone_v -1; //transforma o input em índice
                    if(cone_v < 0 || cone_v > colunas) // valida se está dentro do tabuleiro
                        {
                            printf("Opção inválida\n"); //mensagem para cooredana inválida
                            validador = 1; //altera o validador para verdadeiro
                            break; //encerra loop interno
                        } if (validador) break; //encerra loop externo
                    if(!validador) //condicional caso o validador seja falso
                    {
                    printf("Insira a coordenada horizontal (1 a 10):\n"); // insere a coordenada horizontal
                    scanf("%d", &cone_h);//armazena a variável
                    cone_h = cone_h - 1;//transforma em índice
                    if(cone_h < 0 || cone_h > colunas)//valida se está dentro do tabuleiro
                        {
                            validador = 0; //reseta a variável de validação
                            printf("Opção inválida\n");//mensagem coordenada inválida
                            validador = 1; //altera o validador para verdadeiro
                            break;//encerra loop interno
                        } if(validador) break;//encerra loop externo
                    } if(!validador)//condicional para o validador falso
                    {
                    if(tabuleiro[cone_v][cone_h] == 3)
                        {
                            tabuleiro[cone_v][cone_h] = 5;
                        } else {tabuleiro[cone_v][cone_h] = 2;}
                    for(int i = -1; i <= 1; i++)
                        {
                            if(tabuleiro[cone_v+1][cone_h+i] == 3)
                            {
                                tabuleiro[cone_v+1][cone_h+i] = 5;
                            } else {tabuleiro[cone_v+1][cone_h+i] = 2;}
                        }
                    for(int i = -2; i <= 2; i++)
                        {
                            if(tabuleiro[cone_v+2][cone_h+i] == 3)
                                {
                                    tabuleiro[cone_v+2][cone_h+i] = 5;
                                } else {tabuleiro[cone_v+2][cone_h+i] = 2;}
                        }
                    }
                break;
                case 3:
                    printf("Insira a coordenada vertical (1 a 10):\n"); //inserir a coordenada vertical
                    scanf("%d", &octa_v); //armazena a variável
                    octa_v = octa_v -1; //transforma o input em índice
                    if(octa_v < 0 || octa_v > colunas) // valida se está dentro do tabuleiro
                        {
                            printf("Opção inválida\n"); //mensagem para cooredana inválida
                            validador = 1; //altera o validador para verdadeiro
                            break; //encerra loop interno
                        } if (validador) break; //encerra loop externo
                    if(!validador) //condicional caso o validador seja falso
                    {
                    printf("Insira a coordenada horizontal (1 a 10):\n"); // insere a coordenada horizontal
                    scanf("%d", &octa_h);//armazena a variável
                    octa_h = octa_h - 1;//transforma em índice
                    if(octa_h < 0 || octa_h > colunas)//valida se está dentro do tabuleiro
                        {
                            validador = 0; //reseta a variável de validação
                            printf("Opção inválida\n");//mensagem coordenada inválida
                            validador = 1; //altera o validador para verdadeiro
                            break;//encerra loop interno
                        } if(validador) break;//encerra loop externo
                    } if(!validador)//condicional para o validador falso
                        {
                            for(int i = -1; i <= 1; i++) //inicia loop para montar a linha vertical da cruz
                            {
                                if(tabuleiro[octa_v+i][octa_h] == 3) //valida se alguma coordenada tem navio
                                    {
                                        tabuleiro[octa_v+i][octa_h] = 5; //coordenadas com navio altera para 5, colisão
                                    } else 
                                    {tabuleiro[octa_v+i][octa_h] = 2;} //coordenadas sem navio altera para 2, habilidade
                            }
                            for (int j = -1; j <=1; j++) //inicia loop para montar a linha horizontal da cruz
                                {
                                    if(tabuleiro[octa_v][octa_h+j] == 3)//valida coordenadas com navio
                                        {
                                            tabuleiro[octa_v][octa_h+j] = 5;//coordenadas com navio altera para 5, colisão
                                        } else
                                        {tabuleiro[octa_v][octa_h+j] = 2;} //coordenadas sem navio altera para 2, habilidade
                                }
                        }
                break;
                default:
                printf("Opção inválida\n");
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
