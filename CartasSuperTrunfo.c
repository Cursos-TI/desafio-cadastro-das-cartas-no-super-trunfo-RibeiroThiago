#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main (){

    long long int populacao1, populacao2;
    int pontos1, pontos2;
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    double area1, area2;
    double pib1, pib2;
    double densidade1, densidade2; 
    double pibCapita1, pibCapita2;

//informações sobre a carta 1
    printf("Insira a inicial do Estado [1] ");
    scanf("%s", &estado1);

    printf("Insira o nome da Cidade [1] ");
    scanf("%s", &cidade1);

    printf("Insira o código da carta [1] ");
    scanf ("%s", &codigo1);

    printf("Insira a População [1] ");
    scanf("%lld", &populacao1);

    printf("Insira a Área [1] ");
    scanf("%lf", &area1);

    printf("Insira o PIB da Cidade [1] ");
    scanf("%lf", &pib1);

    printf("Insira a quantidade de Pontos Turísticos [1] ");
    scanf("%d", &pontos1);

    
//informações sobre a carta 2
    printf("Insira a inicial do Estado [2] ");
    scanf("%s", &estado2);

    printf("Insira o nome da Cidade [2] ");
    scanf("%s", &cidade2);

    printf("Insira o código da carta [2] ");
    scanf ("%s", &codigo2);

    printf("Insira a População [2] ");
    scanf("%lld", &populacao2);

    printf("Insira a Área [2] ");
    scanf("%lf", &area2);

    printf("Insira o PIB da Cidade [2] ");
    scanf("%lf", &pib2);

    printf("Insira a quantidade de Pontos Turísticos [2] ");
    scanf("%d", &pontos2);

//calculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibCapita2 = (pib2 * 1000000000.0) / populacao2;

//resultados da carta 1
    printf("\nCarta 1:\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %lld\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\n", cidade1, populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibCapita1);


//resultados da carta 2
    printf("\n\n\nCarta 2:\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %lld\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\n", cidade2, populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibCapita2);


return 0;






}