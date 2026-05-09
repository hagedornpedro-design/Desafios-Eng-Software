#include <stdio.h>
#include <string.h>

int main() {
    int x = 10;
    int* p = &x; // ponteiro para x

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Conteúdo de p: %p\n", p);
    printf("Valor apontado por p: %d\n", *p);

    return 0;
} 

/*
Alocação dinâmica de memória

int* vetor = (int*)malloc(5 * sizeof(int));

int* vetor = (int*)calloc(5, sizeof(int));

free(vetor);


int  *a, b; //declarei o ponteiro a e a variável b


b = 10; // declarou a variável b
a = (int*) malloc(sizeof(int)); //reservou a memória para o ponteiro a
*a = 20; //declarei um valor no endereço do ponteiro a
a = &b; //apontei a para a variável b, o endereço de memória alocado se perdeu
free(a); agora ao tentar limpar a, esta direcionando para o endereço estático de b, que não pode ser liberado


 ponteiro com função

tipo_de_retorno (*nome_do_ponteiro)();
(*nome_do_ponteiro)(declaração_de_parâmetro);
float (*func_ptr)(int, int);

// exemplo de programa com ponteiro de função

#include <stdio.h>


void saudacao() { //crio a função nome saudação
    printf("Olá, mundo!
");
}

int main() {
    void (*ptr)() = saudacao; // ponteiro para função saudação
    ptr(); // chamada indireta
    return 0;
} 

//exemplo código com estrutura

#include <stdio.h>
#include <stdlib.h>

typedef struct { //defino a estrutura e os campos e coloco o nome
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa* p = (Pessoa*)malloc(sizeof(Pessoa)); //aqui definido p como endereço de memória da estrutura pessoa
    if (p == NULL) return 1;

//para apontar uma variável da estrutura se usa a seta, ex

printf("Digite o nome: \n"); solicita o input de dados
scanf("%s", p->nome); aqui ele grava o dado dentro da variável nome dentro da estrutura pessoa

//mesmo exemplo com idade
printf("Digite sua idade: \n");
scanf("%d", p->idade); 

printf("%s tem %d anos. \n", p->pessoa,p->idade); //imprime os dados da estrutura.

free(p) //libera a alocação da memória


*/