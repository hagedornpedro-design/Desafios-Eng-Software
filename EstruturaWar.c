#include <stdio.h>
#include <string.h>
#include <stdlib.h> //biblioteca para rand e alocação dinâmica de memória
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
    char missao[100]; //armazena a missão gerada para o território
    int tipo;
    int indiceAlvo;
    } territorio;

    
//criar funções modulares: cadastro, exibição, ataque, liberação, menu, gerar missão e verificar missão
void cadastro(territorio* mapa, int quantidade);
void exibirmapa(territorio* mapa, int quantidade);
void ataque(territorio* atacante, territorio* defensor);
void liberar(territorio* mapa);
int exibirMenu();
int checkmissao(territorio* mapa, int quantidade, territorio* jogadorAtual);
void gerarmissao(territorio* mapa, int quantidade);

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
    //função do menu
    int exibirMenu(){
        int opcaoMenu;
        printf("\n ~~ Menu de opções ~~ \n");
        printf("Escolha uma opção:\n");
        printf("1 - Atacar\n");
        printf("2 - Verificar missão\n");
        printf("3 - Sair\n");
        scanf("%d", &opcaoMenu);
        return opcaoMenu;
    }

    //função de gerar missão
        void gerarmissao(territorio* mapa, int quantidade){
            //inserir a função para gerar a missão
            //vetor com as missões
            char* listaMissao[] = {
                "Conquistar o território %s!",
                "Eliminar o exército %s!",
                };
            //considera cada territorio é um jogador
            for (int i = 0; i < quantidade; i++){
                int indiceInimigo; //garante pegar um inimigo e não o proprio jogador
                do {
                    indiceInimigo = rand() % quantidade;
                } while (indiceInimigo == i);
                //sorteia a missão
                int tipoMissao = rand() % 2;

                //salvar os indices da missão e do inimigo
                mapa[i].tipo = tipoMissao;
                mapa[i].indiceAlvo = indiceInimigo;

                if (tipoMissao == 0) {
                    sprintf(mapa[i].missao, listaMissao[tipoMissao], mapa[indiceInimigo].nome);
                } else {
                    sprintf(mapa[i].missao, listaMissao[tipoMissao], mapa[indiceInimigo].cor);
                    }
                }
            }
    //função de check missão
        int checkmissao(territorio* mapa, int quantidade, territorio* jogadorAtual){
            //recuperar o indice do territorio inimigo
            int idinimigo = jogadorAtual->indiceAlvo;
            
            //implementar a condicional da missão tipo 0
            if (jogadorAtual->tipo == 0) {
                //condicional valida se a cor do territorio alvo é da mesma cor que o jogador atual
                if(strcmp(mapa[idinimigo].cor, jogadorAtual->cor) == 0){
                    printf("Missão Cumprida!\n");
                    printf("Vitória do Jogador %s", jogadorAtual->nome);
                    return 1;
                }
            }

            //agora valida se a missão é a eliminação do inimigo
            else if (jogadorAtual->tipo == 1) {
                //recupera a cor do exército inimigo recebido na missão
                char* corInimiga = mapa[idinimigo].cor;
                int corInimigoExiste = 0;

                //varre o mapa procurando pela cor
                for (int i = 0; i < quantidade; i++) {
                    if(strcmp(mapa[i].cor, jogadorAtual->cor) != 0 && strcmp(mapa[i].cor, corInimiga) ==0) {
                        corInimigoExiste = 1;
                        break;
                    }
                    
                } if(corInimigoExiste == 0) {
                    printf("Missão Cumprida!\n");
                    printf("Vitória do Jogador %s", jogadorAtual->nome);
                }
            }
            printf("Missão atual em andamento\n");
            return 0;
        }


//função do jogo
int main()
    {
        int qtde; //declara variável para quantidade de territórios a cadastrar
        int opataque,opdefesa; //declara variável de opção de ataque e defesa
        int opcaoMenu = 0;
       
       do {
            printf("Quantos territórios deseja cadastrar?\n");
            scanf("%d", &qtde);
            if (qtde < 2) {
                printf("Cadastre no mínimo dois territórios\n");
            }
        } while (qtde <2);
       //fazer alocação de memória necessária para quantidade de territórios para alocar
       territorio* mapa = (territorio*)calloc(qtde, sizeof(territorio));
       
       cadastro(mapa,qtde);

       exibirmapa(mapa,qtde);

       //aqui entra a geração das missões e definição do turno e jogador, cada territorio é um jogador
       srand(time(NULL));
       gerarmissao(mapa,qtde);

       int turno = 0;


       
    //loop do jogo incluindo o menu
    while(opcaoMenu != 3)
        {  
            //antes de entrar no Menu, identifica o jogador
            territorio* jogadoratual = &mapa[turno];
            printf("Sua vez: %s exército %s\n",jogadoratual->nome,jogadoratual->cor);
            printf("Sua missão é: %s\n",jogadoratual->missao);
            opcaoMenu = exibirMenu();

            switch (opcaoMenu) {
                case 1: //fase de batalha
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
                    turno = (turno + 1)%qtde; //implementa lógica de loop para cada jogador
                    } else {
                        printf("Dados inválidos\n");
                    }
                    printf("Pressione Enter para continuar...\n");
                    while(getchar()!= '\n');
                    getchar();
                    exibirmapa(mapa,qtde);
                    break;
                case 2:
                    //na verificação da missão, se ela estiver concluída o jogo encerra, caso contrário ele continua
                    if(checkmissao(mapa, qtde, jogadoratual) == 1){
                        printf("Fim de jogo!\n");
                        printf("Vitória do jogador %s\n", jogadoratual->nome);
                        opcaoMenu = 3;
                        } else {
                            //se a missão não finalizou, retorna para o jogo
                            printf("Pressione Enter para continuar...\n");
                            while(getchar()!= '\n');
                            getchar();
                        }
                        
                    break;
                case 3:
                    printf("Saindo do jogo...\n");
                    break;
                default:
                    printf("Opção inválida, tente novamente\n");
                    break;
        }

    }
    liberar(mapa);
    return 0;
}