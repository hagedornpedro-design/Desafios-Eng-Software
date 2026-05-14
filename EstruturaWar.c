#include <stdio.h>
#include <string.h>
#include <string.h> //biblioteca para rand e alocação dinâmica de memória
#include <time.h> // biblioteca para o dado aleatório

//Desafio intermediário - Estrutura de dados aula 1 - Jogo War
// Dev dessa etapa
//Alocação dinâmica de territórios, Simulação de ataques, Atualização de dados, Exibição pós-ataque
//Modularização, Uso de ponteiros, Gerenciamento de memória, Interface amigável



//Criação da estrutura territorio
typedef struct
    {
    char nome[30]; //armazena o nome com 30 caracteres
    char cor[10]; //armazena a cor com 10 caracteres
    int tropas; //armazena a quantidade de tropas em numeros inteiros
    } territorio;

    
//criar funções modulares: cadastro, exibição, ataque, liberação
void cadastro(territorio* mapa, int quantidade);
void exibirmapa(territorio* mapa, int quantidade);
void ataque(territorio* atacante, territorio* defensor);
void liberar(territorio* mapa);

//implementação das funções

    //função cadastro
void cadastro(territorio* mapa, int quantidade) 
    {
    for (int i = 0; i < quantidade; i++)
        {
            
            printf("\n ~~~ Cadastrar Território %d ~~~ \n\n", i + 1);
            printf("Digite o nome do território: ");
            scanf(" %s", mapa[i].nome);
            printf("Digite a cor do território: ");
            scanf(" %s", mapa[i].cor);
            printf("Digite a quantidade de tropas: ");
            scanf("%d", &mapa[i].tropas);
        }
    }
    
    //função exibir mapa
    void exibirmapa(territorio* mapa, int quantidade)
        {
            printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
            printf("MAPA MUNDI ~ Estado Atual\n");
            printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
            for (int i = 0; i < quantidade; i++)
                {
                    printf("%s (Exército %s, Tropas:  %d)\n", mapa[i].nome,mapa[i].cor,mapa[i].tropas);             
                }
        }

    //função ataque
    void ataque(territorio* atacante,territorio* defensor)
        {
            //validação não pode atacar a própria cor
            if(strcmp(atacante->cor,defensor->cor)==0)
                {
                    printf("\nErro! Você não pode atacar a própria cor!\n");
                    return;
                }
            //validação de tropas para ataque
            if(atacante->tropas<=1)
                {
                    printf("\n%s não tem tropas para atacar!\n", atacante->nome);
                    return;
                }
            //simulação dos dados
            int dadoataque = (rand()%6)+1; //rola o dado do ataque
            int dadodefesa = (rand()%6)+1; //rola o dado da defesa
            //exibe o nome e resultado do dados para o ataque, depois defesa
            printf("O atacante %s rolou um dado e tirou %d\n", atacante->nome,dadoataque);
            printf("O defensor %s rolou um dado e tirou %d\n", defensor->nome,dadodefesa);
            //compara os valores
            if (dadoataque > dadodefesa) //vitoria do ataque
                {
                    defensor->tropas--; //reduz as tropas da defesa
                    printf("Vitória do Ataque! %s perdeu uma tropa.\n", defensor->nome);
                    //logica da conquista do territorio, se chegar a 0 conquista.
                    if (defensor->tropas <= 0 )
                    {
                        printf("Conquista! O território %s foi dominado pelo exército %s!\n", defensor->nome,atacante->cor);
                        //muda a cor do território conquistado
                        strcpy(defensor->cor,atacante->cor);
                        //retorna uma tropa para o defensor e reduz uma no atacante
                        atacante->tropas--;
                        defensor->tropas++;
                    }
                }
                    else
                    {
                        //vitoria da defesa ou empate
                        atacante->tropas--;
                        printf("Vitória da Defesa! %s perdeu uma tropa.\n", atacante->nome);
                    }
                
        }

    //função de limpar memória
    void liberar(territorio* mapa)
        {
            free(mapa);
            printf("Memória liberada com sucesso!\n");
        }

//função do jogo
int main()
    {
        int qtde; //declara variável para quantidade de territórios a cadastrar
        int opataque,opdefesa; //declara variável de opção de ataque e defesa
       printf("Quantos territórios deseja cadastrar?\n");
       scanf("%d", &qtde);
       //fazer alocação de memória necessária para quantidade de territórios para alocar
       territorio* mapa = (territorio*)calloc(qtde, sizeof(territorio));
       
       cadastro(mapa,qtde);

       exibirmapa(mapa,qtde);

       
    //loop do jogo até a saída
    while(1)
        {  
        //inserir o Ataque
        printf("\n~~~~~~ FASE DE ATAQUE ~~~~~~ \n");
        printf("Escolha o território atacante (1 a %d, ou 0 para sair):\n", qtde);
        scanf("%d", &opataque);
        if(opataque==0) break; //encerra no zero
        printf("Escolha o território defensor (1 a %d, ou 0 para sair):\n", qtde);
        scanf("%d", &opdefesa);
        if(opdefesa==0) break; //encerra no zero
        //validação dos dados de entrada
        if (opataque <= qtde && opdefesa <= qtde)
            {
                //chama função de ataque
                ataque(&mapa[opataque-1], &mapa[opdefesa-1]);

                printf("Pressione enter para continuar...\n");
                while(getchar()!= '\n');
                getchar();
                exibirmapa(mapa,qtde);

            }
            else
            {
                printf("Dados inválidos!\n");
                printf("Pressione enter para continuar...\n");
                while(getchar()!= '\n');
                getchar();
                
            }
        }
        printf("Saindo do jogo, Obrigado por jogar!\n");
        liberar(mapa);
        return 0;

    }
    