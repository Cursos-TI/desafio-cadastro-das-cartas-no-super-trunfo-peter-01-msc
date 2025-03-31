#include <stdio.h>

int main(){
    /*
    JOGO SUPER TRUNFO - TEMA: PAÍSES. 

    Variáveis para cadastro das Cartas: 
    Estado - representado por uma letra de 'A' a 'H';
    Código da carta - letra escolhida seguida de um número de 01 a 04;
    Nome da cidade;
    População - número de habitantes da cidade;
    Área - medida em quilômetros quadrados;
    PIB - Produto Interno Bruto da cidade;
    Número de Pontos Turísticos - quantidade de pontos turísticos na cidade. 
     */

     //Declaração de Variáveis:

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int turisticos1, turisticos2;
    float area1, area2;
    float pib1, pib2;

    //Entrada de dados - Carta 1:

    printf("Digite a letra que representa o Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo1);

    printf("Digite o Nome da Cidade: ");
    scanf("%s", &cidade1);

    printf("Digite a População da Cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (Produto Interno Bruto) da Cidade: ");
    scanf("%f", &pib1);

    printf("Digite o Número de Pontos Turísticos na cidade: ");
    scanf("%d", &turisticos1);

    //Saída de dados - Carta 1 - apresentação geral dos dados informados:

    printf("\nCARTA 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", turisticos1);


     //Entrada de dados - Carta 2:

     printf("\nDigite a letra que representa o Estado: ");
     scanf(" %c", &estado2);
 
     printf("Digite o Código da Carta: ");
     scanf("%s", &codigo2);
 
     printf("Digite o Nome da Cidade: ");
     scanf("%s", &cidade2);
 
     printf("Digite a População da Cidade: ");
     scanf("%d", &populacao2);
 
     printf("Digite a Área da Cidade (em km²): ");
     scanf("%f", &area2);
 
     printf("Digite o PIB (Produto Interno Bruto) da Cidade: ");
     scanf("%f", &pib2);
 
     printf("Digite o Número de Pontos Turísticos na cidade: ");
     scanf("%d", &turisticos2);
 
     //Saída de dados - Carta 2 - apresentação geral dos dados informados:
 
     printf("\nCARTA 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", turisticos2);

    return 0;

}
