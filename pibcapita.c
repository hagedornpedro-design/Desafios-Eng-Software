#include <stdio.h>

int main()
{

int populacao1;
float pib1;
float area1;
int pontos1;
double densidade1;
double inverso_densidade1;
float pib_capita1;


populacao1 = 12325000;
pib1 = 699.28;
area1 = 1521.11;
pontos1 = 50;
densidade1 = (float) populacao1 / area1;
pib_capita1 = (pib1 * 1000000000) / populacao1;
inverso_densidade1 = (1/densidade1);

double super_poder_1;

super_poder_1 = populacao1 + area1 + pib1 + pontos1 + pib_capita1 + inverso_densidade1;

int populacao2;
float pib2;
float area2;
int pontos2;
double densidade2;
double inverso_densidade2;
float pib_capita2;



populacao2 = 6748000;
pib2 = 300.50;
area2 = 1200.25;
pontos2 = 30;
densidade2 = (float) populacao2 / area2;
pib_capita2 = (pib2 * 1000000000) / populacao2;
inverso_densidade2 = (1/densidade2);

double super_poder_2;

super_poder_2 = populacao2 + area2 + pib2 + pontos2 + pib_capita2 + inverso_densidade2;



//printf("Super poder: %ld\n", super_poder_1);
//printf("densidade: %.2f\n", densidade1);
//printf("pib capita: %.2f\n", pib_capita1);
//printf("inverso densidade: %.10f\n", inverso_densidade1);
//printf("SP: %.10f\n", super_poder_1);

int resultado_populacao;
int resultado_area;
int resultado_pib;
int resultado_pontos;
int resultado_densidade;
int resultado_pib_capita;
int resultado_superpoder;

resultado_populacao = populacao1 > populacao2;
resultado_area = area1 > area2;
resultado_pib = pib1 > pib2;
resultado_pontos = pontos1 > pontos2;
resultado_densidade = inverso_densidade1 > inverso_densidade2;
resultado_pib_capita = pib_capita1 > pib_capita2;
resultado_superpoder = super_poder_1 > super_poder_2;


//printf("densidade: %.2f\n", densidade1);
//printf("densidade: %.2f\n", densidade2);
//printf("inverso densidade: %.10f\n", inverso_densidade1);
//printf("inverso densidade: %.10f\n", inverso_densidade2);
printf("resultado população: %d\n", resultado_populacao);
printf("Resultado area: %d\n", resultado_area);
printf("resultado pib %d\n", resultado_pib);
printf("resultado pontos %d\n", resultado_pontos);
printf("resutaldo densidade %d\n", resultado_densidade);
printf("resultado pib capita %d\n", resultado_pib_capita);
printf("resultado super poder %d\n", resultado_superpoder);






}