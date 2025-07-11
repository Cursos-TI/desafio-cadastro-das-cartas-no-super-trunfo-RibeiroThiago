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

#include <stdio.h>

/*int main (){

    long long int populacao1, populacao2;
    int pontos1, pontos2;
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    double area1, area2;
    double pib1, pib2;
    double densidade1, densidade2; 
    double pibCapita1, pibCapita2;
    float superPoder1, superPoder2;
    int resultado;

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

//cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pibCapita1 + pontos1 + (densidade1 / 1);
    superPoder2 = populacao2 + area2 + pib2 + pibCapita2 + pontos2 + (densidade2 / 1);


//resultados da carta 1
    printf("\nCarta 1:\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %lld\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\n", cidade1, populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibCapita1);
    printf("Super Poder: %f\n", superPoder1);


//resultados da carta 2
    printf("\n\n\nCarta 2:\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %lld\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\n", cidade2, populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibCapita2);
    printf("Super Poder: %f\n", superPoder2);


//resultado da comparação entre as cartas

    printf("\n\n\n*** Comparação de Cartas ***");
    
    printf("\nPopulação: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Área: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 2 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

return 0;






}*/

int main (){

    long long int populacao1, populacao2;
    unsigned int pontos1, pontos2;
    char estado1[10], estado2[10];
    char codigo1[10], codigo2[10];
    char cidade1[30], cidade2[30];
    double area1, area2;
    double pib1, pib2;
    double densidade1, densidade2; 
    double pibCapita1, pibCapita2;
    float superPoder1, superPoder2;
    int resultado;

//coleta de informações carta 1
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
    scanf("%u", &pontos1);

        
//coleta de informações carta 2
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
    scanf("%u", &pontos2);

//cálculos
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibCapita1 = (pib1 * 1000000000.0) / populacao1;
    pibCapita2 = (pib2 * 1000000000.0) / populacao2;

    superPoder1 = populacao1 + area1 + pib1 + pibCapita1 + pontos1 + (densidade1 / 1);
    superPoder2 = populacao2 + area2 + pib2 + pibCapita2 + pontos2 + (densidade2 / 1);


//título do jogo
    printf("\n\n#####################################\n");
    printf("### JOGO SUPER TRUNFO by TechNova ###\n");
    printf("#####################################\n\n");

//resultados carta 1
    printf("\nCarta 1:\n");

    printf("Estado: %s\n", estado1);
    printf("Código: %s%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s\nPopulação: %lld\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\n", cidade1, populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %u\n", pontos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade1);
    printf("PIB per Capita: %.2lf reais\n", pibCapita1);
    printf("Super Poder: %.0f\n", superPoder1);


//resultados carta 2
    printf("\n\nCarta 2:\n");

    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s\nPopulação: %lld\nÁrea: %.2lf km²\nPIB: %.2lf bilhões de reais\n", cidade2, populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %u\n", pontos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibCapita2);
    printf("Super Poder: %.0f\n", superPoder2);


//resultado da comparação entre as cartas

    printf("\n\n*** Comparação de Cartas ***\n");

    //comparação de população
    printf("\nAtributo: População\n");
    printf("Carta 1 - %s (%s): %lld\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lld\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
        
    //comparação de area
    printf("\nAtributo: Área\n");
    printf("Carta 1 - %s (%s): %.2lf\n", cidade1, estado1, area1);
    printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, area2);
    if (area1 > area2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //comparação de pib
    printf("\nAtributo: PIB\n");
    printf("Carta 1 - %s (%s): %.2lf\n", cidade1, estado1, pib1);
    printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, pib2);
    if (pib1 > pib2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //comparação de pontos turisticos
    printf("\nAtributo: Pontos Turísticos\n");
    printf("Carta 1 - %s (%s): %u\n", cidade1, estado1, pontos1);
    printf("Carta 2 - %s (%s): %u\n", cidade2, estado2, pontos2);
    if (pontos1 > pontos2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //comparação de densidade
    printf("\nAtributo: Densidade Populacional\n");
    printf("Carta 1 - %s (%s): %.2lf\n", cidade1, estado1, densidade1);
    printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, densidade2);
    if (densidade1 < densidade2){
       printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

   //comparação de pib per capita
    printf("\nAtributo: PIB per Capita\n");
    printf("Carta 1 - %s (%s): %.2lf\n", cidade1, estado1, pibCapita1);
    printf("Carta 2 - %s (%s): %.2lf\n", cidade2, estado2, pibCapita2);
    if (pibCapita1 > pibCapita2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

    //comparação de superpoder
    printf("\nAtributo: Super Poder\n");
    printf("Carta 1 - %s (%s): %.0f\n", cidade1, estado1, superPoder1);
    printf("Carta 2 - %s (%s): %.0f\n", cidade2, estado2, superPoder2);
    if (superPoder1 > superPoder2){
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else{
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }

return 0;






}
