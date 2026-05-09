#include <stdio.h>
#include <string.h>

//Desafio Novato - Estrutura de dados aula 1 - Jogo War
// Dev dessa etapa
//Criar uma struct chamada Territorio  para armazenar nome, cor e quantidade de tropas
//O sistema vai permitir cadastrar 5 territórios e vai exibir os dados após o preenchimento

//Criação da estrutura territorio
struct territorio 
    {
    char nome[30]; //armazena o nome com 30 caracteres
    char cor[10]; //armazena a cor com 10 caracteres
    int tropas; //armazena a quantidade de tropas em numeros inteiros
    };

//função principal
int main()
    {
        //declarar o vetor da struct para armazenar 5 territórios
        struct territorio listaterritorios[5];
        int i;

        //Iniciar o cadastro dos territorios
        printf(" ~ Cadastrar Territórios ~ \n");
        //Fazer a entrada de dados
        for (i = 0; i < 2; i++) //loop para cadastrar 5 territórios
            {
                printf("Digite o nome do território:\n");
                scanf("%s", listaterritorios[i].nome);
                printf("Digite a cor do território:\n");
                scanf("%s", listaterritorios[i].cor);
                printf("Digite a quantidade de tropas:\n");
                scanf("%d", &listaterritorios[i].tropas);
                printf("\n\nVocê cadastrou o %d território\n\n", i + 1); //mensagem de confirmação de qual território foi cadastrado
            }
        
        //exibir os dados
        
        //Lista dos territórios

        printf("\n\n ~ Lista dos territórios ~ \n\n");
        for (i = 0; i < 2; i++)
            {
        printf("%s | %s | %d\n\n", listaterritorios[i].nome,listaterritorios[i].cor,listaterritorios[i].tropas);
            }
        
    }
    