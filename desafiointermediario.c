#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){

    //declaração das variáveis da carta 1


char municipio1[30] = "Sao Paulo";
char letra1 = 'A';
char codigo1[4] = "A01";
int populacao1;
float area1;
float pib1;
int pontos1;
float densidade1;
float pib_capita1;


populacao1 = 12325000;
pib1 = 699.28;
area1 = 1521.11;
pontos1 = 50;
densidade1 = (float) populacao1 / area1;
pib_capita1 = (pib1 * 1000000000) / populacao1;


//declaração das variáveis da carta 2

char municipio2[30] = "Rio de Janeiro";
char letra2 = 'B';
char codigo2[4] = "B02";
int populacao2;
float area2;
float pib2;
int pontos2;
float densidade2;
float pib_capita2;


populacao2 = 6748000;
pib2 = 300.50;
area2 = 1200.25;
pontos2 = 30;
densidade2 = (float) populacao2 / area2;
pib_capita2 = (pib2 * 1000000000) / populacao2;


int opcao1, opcao2, opcao3;

printf("~~~~ Super Trunfo ~~~~\n");
printf("Selecione uma opção\n");
printf("1. consultar cartas\n");
printf("2. Jogar\n");
printf("3. Regras\n");
printf("4. Sair\n");
scanf("%d", &opcao1);


switch(opcao1)
    {
        case 1:
        printf("Selecione uma das cartas abaixo\n");
        printf("1. A01\n");
        printf("2. B02\n");
        scanf("%d", &opcao2);
            switch(opcao2)
            {
                case 1:
                printf("Você escolheu %s\n", municipio1);
                printf("Código: %s \n", codigo1);
                printf("Estado: %c \n", letra1);
                printf("População: %d \n", populacao1);
                printf("Área: %.2f km² \n", area1);
                printf("PIB: %.2f bilhões de reais \n", pib1);
                printf("Pontos turísticos: %d\n", pontos1);
                printf("Densidade populacional: %.2f hab/km²\n", densidade1);
                break;
                case 2:
                printf("Você escolheu %s\n", municipio2);
                printf("Código: %s \n", codigo2);
                printf("Estado: %c \n", letra2);
                printf("População: %d \n", populacao2);
                printf("Área: %.2f km² \n", area2);
                printf("PIB: %.2f bilhões de reais \n", pib2);
                printf("Pontos turísticos: %d\n", pontos2);
                printf("Densidade populacional: %.2f hab/km²\n", densidade2);
                break;
                default:
                    (printf("Opção inválida\n"));
            }
        case 2:
            printf("Selecione uma carta\n");
            printf("1. São Paulo\n");
            printf("2. Rio de Janeiro\n");
            scanf("%d", &opcao2);
            switch (opcao2)
            {
                case 1:
                printf("Escolha um atributo:\n");
                printf("1. Nome do município\n")/
                printf("2. População\n");
                printf("3. Área\n");
                printf("4. PIB\n");
                printf("5. Pontos turísticos\n");
                printf("6. Densidade demográfica\n");
                scanf("%d", &opcao3);
                    switch (opcao3)
                    {                 
                    case 1:
                        printf("Você escolheu %s\n", municipio1);
                    break;
                    case 2:
                        if(populacao1 > populacao2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem população de %d e %s tem população de %d\n", municipio1,populacao1,municipio2,populacao2);
                        }
                        else if(populacao1 < populacao2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem população de %d e %s tem população de %d\n", municipio1,populacao1,municipio2,populacao2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;
                    case 3:
                        if(area1 > area2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem área de %.2f e %s tem área de %.2f\n", municipio1,area1,municipio2,area2);
                        }
                        else if(area1 < area2)
                        {
                            printf("Você perdeu!\n");
                            printf("%n tem área de %.2f e %s tem área de %.2f\n", municipio1,area1,municipio2,area2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;
                    case 4:
                        if(pib1 > pib2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem PIB de %.2f e %s tem PIB de %.2f\n", municipio1,pib1,municipio2,pib2);
                        }
                        else if(pib1 < pib2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem PIB de %.2f e %s tem PIB de %.2f\n", municipio1,pib1,municipio2,pib2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;
                        case 5:
                        if(pontos1 > pontos2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n", municipio1,pontos1,municipio2,pontos2);
                        }
                        else if(pontos1 < pontos2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n", municipio1,area1,municipio2,area2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break; 
                        case 6:
                        if(densidade1 > densidade2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem densidade %.2f e %s tem densidade %.2f\n", municipio1,densidade1,municipio2,densidade2);
                        }
                        else if(densidade1 < densidade2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem densidade %.2f e %s tem densidade %.2f\n", municipio1,densidade1,municipio2,densidade2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;                                                
                        
                    }
                break;
                case 2:
                printf("Escolha um atributo:\n");
                printf("1. Nome do município\n")/
                printf("2. População\n");
                printf("3. Área\n");
                printf("4. PIB\n");
                printf("5. Pontos turísticos\n");
                printf("6. Densidade demográfica\n");
                scanf("%d", &opcao3);
                switch (opcao3)
                    {                 
                    case 1:
                        printf("Você escolheu %s\n", municipio2);
                    break;
                    case 2:
                        if(populacao1 < populacao2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem população de %d e %s tem população de %d\n", municipio1,populacao1,municipio2,populacao2);
                        }
                        else if(populacao1 > populacao2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem população de %d e %s tem população de %d\n", municipio1,populacao1,municipio2,populacao2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;
                    case 3:
                        if(area1 < area2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem área de %.2f e %s tem área de %.2f\n", municipio1,area1,municipio2,area2);
                        }
                        else if(area1 > area2)
                        {
                            printf("Você perdeu!\n");
                            printf("%n tem área de %.2f e %s tem área de %.2f\n", municipio1,area1,municipio2,area2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;
                    case 4:
                        if(pib1 < pib2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem PIB de %.2f e %s tem PIB de %.2f\n", municipio1,pib1,municipio2,pib2);
                        }
                        else if(pib1 > pib2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem PIB de %.2f e %s tem PIB de %.2f\n", municipio1,pib1,municipio2,pib2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;
                        case 5:
                        if(pontos1 < pontos2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n", municipio1,pontos1,municipio2,pontos2);
                        }
                        else if(pontos1 > pontos2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem %d pontos turísticos e %s tem %d pontos turísticos\n", municipio1,area1,municipio2,area2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break; 
                        case 6:
                        if(densidade1 < densidade2)
                        {
                            printf("Você perdeu!\n");
                            printf("%s tem densidade %.2f e %s tem densidade %.2f\n", municipio1,densidade1,municipio2,densidade2);
                        }
                        else if(densidade1 > densidade2)
                        {
                            printf("Você venceu!\n");
                            printf("%s tem densidade %.2f e %s tem densidade %.2f\n", municipio1,densidade1,municipio2,densidade2);
                        }
                        else {
                            printf("Empate!\n");
                        }
                        break;                                                
                        
                    }
            

            }
            default: (printf("Opção inválida\n"));
        }

        
    }


