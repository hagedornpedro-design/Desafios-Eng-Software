#include <stdio.h>

int main (){

    //declaração das variáveis da carta 1


char municipio1[30];
char letra1;
char codigo1[4];
int populacao1;
float area1;
float pib1;
int pontos1;
float densidade1;
float populacao1_pib;
float pib_capita1;


//declaração das variáveis da carta 2

char municipio2[30];
char letra2;
char codigo2[4];
int populacao2;
float area2;
float pib2;
int pontos2;
float densidade2;
float pib_capita2;



//Início do cadastro da carta 1
printf("Seja bem vindo\n");
printf("Inicie o cadastro da carta 1\n");
printf("Cadastre o estado (A - H):\n");
scanf("%c", &letra1);


printf("Cadastre o código da carta (ex: A01):\n");
scanf("%s", &codigo1);

//tive q usar getchar para recuperar a variável, estava se perdendo
getchar();
printf("Digite o município:\n");
fgets(municipio1,30,stdin);

printf("Digite a população:\n");
scanf("%d", &populacao1);


printf("Digite a área em km²:\n");
scanf("%f", &area1);

printf("Digite o PIB em bilhões de reais: \n");
scanf("%f", &pib1);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos1);

//calcula os valores de densidade populacional e pib per capita

densidade1 = (float) populacao1 / area1;
pib_capita1 = (float) (pib1 * 1000000000) / populacao1;

//inicia o cadastro da carta 2


printf("Agora cadastre a carta 2\n");
getchar();
printf("Digite o estado (A - H):\n");
scanf("%c", &letra2);

printf("Digite o código (ex: B01):\n");
scanf("%s", &codigo2);

getchar();
printf("Digite o município: \n");
fgets(municipio2,30,stdin);

printf("Digite a população: \n");
scanf("%d", &populacao2);

printf("Digite a área em km²:\n");
scanf("%f", &area2);

printf("Digite o PIB em bilhões de reais: \n");
scanf("%f", &pib2);

printf("Digite a quantidade de pontos turísticos: \n");
scanf("%d", &pontos2);

//calcula os valores de densidade populacional e pib per capita

densidade2 = (float) populacao2 / area2;
pib_capita2 = (float) (pib2 * 1000000000) / populacao2;


//exibe os dados cadastrados
printf("Cartas cadastradas");

//carta 1
printf("Carta 1\n");
printf("Estado: %c \n", letra1); // não sei por que raios ele grava junto o codigo da 2.
printf("Código: %s \n", codigo1);
printf("Município: %s", municipio1);
printf("População: %d \n", populacao1);
printf("Área: %.2f km² \n", area1);
printf("PIB: %.2f bilhões de reais \n", pib1);
printf("Pontos turísticos: %d\n", pontos1);
printf("Densidade populacional: %.2f hab/km²\n", densidade1);
printf("PIB per capita: %.2f reais\n", pib_capita1);

//carta 2
printf("Carta 2\n");
printf("Estado: %c \n", letra2);
printf("Código: %s \n", codigo2);
printf("Município: %s", municipio2);
printf("População: %d \n", populacao2);
printf("Área: %.2f km² \n", area2);
printf("PIB: %.2f bilhões de reais \n", pib2);
printf("Pontos turísticos: %d\n", pontos2);
printf("Densidade populacional: %.2f hab/km²\n", densidade2);
printf("PIB per capita: %.2f reais\n", pib_capita2);

}
