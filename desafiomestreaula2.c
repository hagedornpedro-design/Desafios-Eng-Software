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



populacao1 = 12325000;
pib1 = 699.28;
area1 = 1521.11;
pontos1 = 50;
densidade1 = (float) populacao1 / area1;



//declaração das variáveis da carta 2

char municipio2[30] = "Rio de Janeiro";
char letra2 = 'B';
char codigo2[4] = "B02";
int populacao2;
float area2;
float pib2;
int pontos2;
float densidade2;




populacao2 = 6748000;
pib2 = 300.50;
area2 = 1200.25;
pontos2 = 30;
densidade2 = (float) populacao2 / area2;

//demais variáveis
int atributo1, atributo2;
float opcaopc1, opcaopc2;
int resultado1, resultado2;
float opcaojogador1,opcaojogador2;
int aleatoriopc, aleatoriojogador;



//Início do jogo

//Seleção do primeiro atributo

printf("Escolha o primeiro atributo\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &atributo1);

//gera atributos aleatórios do jogar e do computador

srand(time(0));


aleatoriopc = rand () %2 +1;

aleatoriojogador = rand () %2 +1;



//seleção do primeiro atributo

switch(atributo1)
{
    case 1:
        printf("Você selecionou a opção População\n");
        if (aleatoriojogador == 1) {
            opcaojogador1 = populacao1;
        } else {
            opcaojogador1 = populacao2;
        }
        if (aleatoriopc == 1) {
            opcaopc1 = populacao1;
        } else {
            opcaopc1 = populacao2;
        }
    resultado1 = opcaojogador1 > opcaopc1 ? 1 : 0;
    break;
    case 2:
        printf("Você selecionou a opção Área\n");
        if (aleatoriojogador == 1) {
            opcaojogador1 = area1;
        } else {
            opcaojogador1 = area2;
        }
        if (aleatoriopc == 1) {
            opcaopc1 = area1;
        } else {
            opcaopc1 = area2;
        }
        resultado1 = opcaojogador1 > opcaopc1 ? 1 : 0;    
    break;
    case 3:
        printf("Você selecionou a opção PIB\n");
        if (aleatoriojogador == 1) {
            opcaojogador1 = pib1;
        } else {
            opcaojogador1 = pib2;
        }
        if (aleatoriopc == 1) {
            opcaopc1 = pib1;
        } else {
            opcaopc1 = pib2;
        }
        resultado1 = opcaojogador1 > opcaopc1 ? 1 : 0;  
    break;
    case 4:
        printf("Você selecionou a opção Pontos turísticos\n");
            if (aleatoriojogador == 1) {
            opcaojogador1 = pontos1;
        } else {
            opcaojogador1 = pontos2;
        }
        if (aleatoriopc == 1) {
            opcaopc1 = pontos1;
        } else {
            opcaopc1 = pontos2;
        }
        resultado1 = opcaojogador1 > opcaopc1 ? 1 : 0;  
    break;
    case 5:
        printf("Você selecionou a opção Densidade populacional\n");
            if (aleatoriojogador == 1) {
            opcaojogador1 = densidade1;
        } else {
            opcaojogador1 = densidade2;
        }
        if (aleatoriopc == 1) {
            opcaopc1 = densidade1;
        } else {
            opcaopc1 = densidade2;
        }
        resultado1 = opcaojogador1 > opcaopc1 ? 1 : 0;
    break;
    default:
    printf("Atributo inválido\n");
    return 0;
}


//seleção do segundo atributo


printf("Selecione o segundo atributo:\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos turísticos\n");
printf("5. Densidade demográfica\n");
scanf("%d", &atributo2);

if(atributo1 == atributo2)
{
    printf("Atributo duplicado, selecione novamente\n");

return 0;
} else {

switch(atributo2)
{
    case 1:
        printf("Você selecionou a opção População\n");
        if (aleatoriojogador == 1) {
            opcaojogador2 = populacao1;
        } else {
            opcaojogador2 = populacao2;
        }
        if (aleatoriopc == 1) {
            opcaopc2 = populacao1;
        } else {
            opcaopc2 = populacao2;
        }
    resultado2 = opcaojogador2 > opcaopc2 ? 1 : 0;
    break;
    case 2:
        printf("Você selecionou a opção Área\n");
        if (aleatoriojogador == 1) {
            opcaojogador2 = area1;
        } else {
            opcaojogador2 = area2;
        }
        if (aleatoriopc == 1) {
            opcaopc2 = area1;
        } else {
            opcaopc2 = area2;
        }
        resultado2 = opcaojogador2 > opcaopc2 ? 1 : 0;    
    break;
    case 3:
        printf("Você selecionou a opção PIB\n");
        if (aleatoriojogador == 1) {
            opcaojogador2 = pib1;
        } else {
            opcaojogador2 = pib2;
        }
        if (aleatoriopc == 1) {
            opcaopc2 = pib1;
        } else {
            opcaopc2 = pib2;
        }
        resultado2 = opcaojogador1 > opcaopc1 ? 1 : 0;  
    break;
    case 4:
        printf("Você selecionou a opção Pontos turísticos\n");
            if (aleatoriojogador == 1) {
            opcaojogador2 = pontos1;
        } else {
            opcaojogador2 = pontos2;
        }
        if (aleatoriopc == 1) {
            opcaopc2 = pontos1;
        } else {
            opcaopc2 = pontos2;
        }
        resultado2 = opcaojogador1 > opcaopc1 ? 1 : 0;  
    break;
    case 5:
        printf("Você selecionou a opção Densidade populacional\n");
            if (aleatoriojogador == 1) {
            opcaojogador2 = densidade1;
        } else {
            opcaojogador2 = densidade2;
        }
        if (aleatoriopc == 1) {
            opcaopc2 = densidade1;
        } else {
            opcaopc2 = densidade2;
        }
        resultado2 = opcaojogador1 > opcaopc1 ? 1 : 0;
    break;
    default:
    printf("Atributo inválido\n");
    return 0;
}

//declaração do município
char municipiojogador[30];
char municipiopc[30];


printf("Conferência dos resultados\n");

if (opcaojogador1 == opcaopc1) {
    printf("Empate do primeiro atributo!\n");
} else if (resultado1 == 1) {
    printf("Você venceu no primeiro atributo!\n");
} else {
    printf("Você perdeu no primeiro atributo\n");
}
if (opcaojogador2 == opcaopc2) {
    printf("Empate do segundo atributo!\n");
} else if (resultado2 == 1) {
    printf("Você venceu no segundo atributo!\n");
} else {
    printf("Você perdeu no segundo atributo\n");
}
if (resultado1 + resultado2 == 2) {
    printf("Parabéns! Você venceu!\n");
} else if ((opcaojogador1 == opcaopc1) && (opcaojogador2 == opcaopc2)) {
    printf("Houve um empate!\n");
} else {
    printf("Infelizmente você perdeu\n");
}
printf("Atributo1\n");
printf("Jogador: %.2f ---- Computador: %.2f\n", opcaojogador1,opcaopc1);
printf("Atributo2\n");
printf("Jogador: %.2f ---- Computador: %.2f\n", opcaojogador2,opcaopc2);

/*
printf("%d e %d\n", aleatoriojogador,aleatoriopc);
printf("%.2f\n", opcaojogador1);
printf("%.2f\n", opcaopc1);
printf("%d\n", resultado1);
printf("%.2f\n", opcaojogador2);
printf("%.2f\n", opcaopc2);
printf("%d", resultado2);
*/

}

}
