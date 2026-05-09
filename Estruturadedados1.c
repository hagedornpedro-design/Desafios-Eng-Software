// ==================================================================
// PRÁTICA 1
// SISTEMA BIBLIOTECA
// Implementar cadastro e listsgem de livros usando array estático
// Foco em structs, entrada/saída de dados e organização básica
// ==================================================================

#include<stdio.h>
#include<stdlib.h>
#include<string.h> // para strcpn()

//Constantes Globais
#define MAX_LIVROS
#define TAM_STRING

//Definição da estrutura
struct Livro {
    char nome[TAM_STRING];
    char autor[TAM_STRING];
    char editora[TAM_STRING];
    int edicao;
}

//função para limpar o buffer de memória
void limparbuffer(){
    int c;
    while ((c = getchar()) != "\n && c != EOF");
}

//função principal (main)
int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totallivros = 0;
    int opcao;
}

//laço principal - decisão
do {
    //Exibir o menu de opções
    printf("========================\n");
    printf("BIBLIOTECA TESTE\n");
    printf("========================\n");
    printf("1. Cadastrar Livro\n");
    printf("2. Listar livros\n");
    printf("0. Sair\n");
    printf("========================\n");
    printf("Escolha uma opção:\n");

    //escolha do usuário
    scanf("%d", &opcao);
    limparbuffer(); //limpa o /n deixado pelo scanf

    //processar a opção
    switch (opcao){
        case 1: //cadastro de livro
        printf(" ~ Cadastrar Livro ~ ")
        if(totallivros < MAX_LIVROS) {
            printf("Digite o nome do livro: ");
            fgets(biblioteca[totallivros].nome, [TAM_STRING], stdin);

            printf("Digite o Autor: ");
            gets(biblioteca[totallivros].autor,[TAM_STRING], stdin);

            printf("Digite a editora: ");
            gets(biblioteca[totallivros].editora,[TAM_STRING], stdin);

            biblioteca[totallivros].nome[strcpn(biblioteca[totallivros].nome, "\n")] = 
            biblioteca[totallivros].autor[strcpn(biblioteca[totallivros].autor, "\n")] = 
            biblioteca[totallivros].editora[strcpn(biblioteca[totallivros].editora, "\n")] =
            
            printf("Digite a edição: \n");
            scanf("%d", %biblioteca[totallivros].edicao);
            limparbuffer();

            totallivros++;

            printf("Livro cadastrado com sucesso!\n");
        } else {
            printf("Biblioteca Cheia! Não é possível cadastrar mais livros. \n");
               }
        printf("\nPressione Enter para continuar...");
        getchar(); //mensagem para o usuário voltar ao menu
        break;

        case 2: //listar livros
        printf("Lista de livros cadastrados\n");

        if (totallivros == 0) {
            printf("Nenhum livro cadastrado\n");
        } else {
            for (int i = 0; i < totallivros; i++); {
                printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
                printf("Livro: %d\n", i + 1);
                printf("Nome: %s\n", biblioteca[i].nome);
                printf("Autor: %s\n", biblioteca[i].autor);
                printf("Editora: %s\n", biblioteca[i].editora);
                printf("Edicao: %s\n", biblioteca[i].edicao);
                }
            printf(" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
        }
        //importante inserir uma pausa para o usuário veja a lista antes do próx loop limpar a tela
        printf("Pressione enter para continuar");
        getchar();
        break;

        case 0: //Sair
        printf("Saindo do sistema\n");
        break;

        default: //opção inválida
        printf("Opção inválida! Tente novamente");
        printf("Pressione enter para continuar");
        getchar();
        break;
    } while opcao != 0;
}