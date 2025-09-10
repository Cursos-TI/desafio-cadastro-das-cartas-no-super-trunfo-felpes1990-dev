#include <stdio.h>

int main() {
    // Dados das Cartas
    char estado1, estado2;                         // Letras representando os estados
    char codigo1[4], codigo2[4];                   // Códigos como A01, D02 (3 caracteres + '\0')
    char nomeCidade1[50], nomeCidade2[50];         // Nomes das cidades
    unsigned long int populacao1, populacao2;       // População das cidades
    float area1, area2;                            // Área das cidades
    float pib1, pib2;                              // PIB das cidades
    int pontosTuristicos1, pontosTuristicos2;      // Número de pontos turísticos
    float densidadepopulacional1,densidadepopulacional2; 
    float pibperCapita1,pibperCapita2;
    float superPoder1 = pontosTuristicos1 + pib1 + pibperCapita1 + (1.0 / densidadepopulacional1);
    float superPoder2 = pontosTuristicos2 + pib2 + pibperCapita2 + (1.0 / densidadepopulacional2);
    int pontosCarta1 = 0;
    int pontosCarta2 = 0;

    
   

    // Leitura dos dados da Carta 1
    printf("Cadastro da Carta 1:\n");

     // Validação da entrada do estado (A ou D)
    
    printf("Digite o estado (A para Paraíba, D para Tocantins): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01 para Paraíba ou D02 para Tocantins): ");
    scanf(" %3s", codigo1);  // Leitura do código da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);  // Leitura do nome da cidade (com espaços)

    printf("Digite a população: ");
    scanf("%d", &populacao1);       // Leitura da população

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);            // Leitura da área

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);             // Leitura do PIB

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1); // Leitura dos pontos turísticos
    
    // Cálculo da densidade
    densidadepopulacional1 = populacao1 / area1;
    pibperCapita1 = pib1 / populacao1;
    superPoder1 = pontosTuristicos1 + pib1 + pibperCapita1 + (1.0 / densidadepopulacional1);

    printf("Densidade populacional do primeiro estado: %.2f habitantes/km²\n", densidadepopulacional1);
    printf("O PIB per capita do estado: R$ %.2f pib1/populacao1\n", pibperCapita1);
    printf("Super Poder: %.2f soma de todos atributos\n", superPoder1);
   

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

    printf("Digite o estado (A para Paraíba, D para Tocantins): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: A01 ou D02): ");
    scanf(" %3s", codigo2);  // Leitura do código da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]%*c", nomeCidade2); // Leitura do nome da cidade

    printf("Digite a população: ");
    scanf("%d", &populacao2);       // Leitura da população

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);            // Leitura da área

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);             // Leitura do PIB

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2); // Leitura dos pontos turísticos
    
    // Cálculo da densidade populacional
    densidadepopulacional2 = populacao2 / area2;
    pibperCapita2 = pib2 / populacao2;
    superPoder2 = pontosTuristicos2 + pib2 + pibperCapita2 + (1.0 / densidadepopulacional2);

    printf("Densidade populacional do segundo estado: %.2f habitantes/km²\n", densidadepopulacional2);
    printf("O PIB per capita do estado: R$ %.2f pib2/populacao2\n", pibperCapita2);
    printf("Super Poder: %.2f soma de todos atributos\n", superPoder2);

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional1);
    printf("PIB per capita: R$ %.2f\n", pibperCapita1);
    printf("Super Poder: %.2f\n", superPoder1);


    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f Hab/km²\n", densidadepopulacional2);                                                                                                                                                             
    printf("PIB per capita: R$ %.2f \n", pibperCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

        printf("\nComparação da Carta 1 com a carta 2:\n");

    // População
    printf("População: %d\n", (populacao1 > populacao2) ? 1 : 0);

    // Área
    printf("Área: %d\n", (area1 > area2) ? 1 : 0);

    // PIB
    printf("PIB: %d\n", (pib1 > pib2) ? 1 : 0);

    // Pontos Turísticos
    printf("Pontos Turísticos: %d\n", (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    // Densidade Populacional - menor vence
    printf("Densidade Populacional: %d\n", (densidadepopulacional1 < densidadepopulacional2) ? 1 : 0);

    // PIB per capita
    printf("PIB per capita: %d\n", (pibperCapita1 > pibperCapita2) ? 1 : 0);

    // Super Poder
    printf("Super Poder: %d\n", (superPoder1 > superPoder2) ? 1 : 0);

// Comparações e contagem de pontos
printf("\nComparação das Cartas:\n");

// População
if (populacao1 > populacao2) {
    pontosCarta1++;
    printf("População: Carta 1 venceu\n");
} else if (populacao1 < populacao2) {
    pontosCarta2++;
    printf("População: Carta 2 venceu\n");
} else {
    printf("População: Empate\n");
}

// Área
if (area1 > area2) {
    pontosCarta1++;
    printf("Área: Carta 1 venceu\n");
} else if (area1 < area2) {
    pontosCarta2++;
    printf("Área: Carta 2 venceu\n");
} else {
    printf("Área: Empate\n");
}

// PIB
if (pib1 > pib2) {
    pontosCarta1++;
    printf("PIB: Carta 1 venceu\n");
} else if (pib1 < pib2) {
    pontosCarta2++;
    printf("PIB: Carta 2 venceu\n");
} else {
    printf("PIB: Empate\n");
}

// Pontos Turísticos
if (pontosTuristicos1 > pontosTuristicos2) {
    pontosCarta1++;
    printf("Pontos Turísticos: Carta 1 venceu\n");
} else if (pontosTuristicos1 < pontosTuristicos2) {
    pontosCarta2++;
    printf("Pontos Turísticos: Carta 2 venceu\n");
} else {
    printf("Pontos Turísticos: Empate\n");
}

// Densidade Populacional – MENOR vence
if (densidadepopulacional1 < densidadepopulacional2) {
    pontosCarta1++;
    printf("Densidade Populacional: Carta 1 venceu\n");
} else if (densidadepopulacional1 > densidadepopulacional2) {
    pontosCarta2++;
    printf("Densidade Populacional: Carta 2 venceu\n");
} else {
    printf("Densidade Populacional: Empate\n");
}

// PIB per capita
if (pibperCapita1 > pibperCapita2) {
    pontosCarta1++;
    printf("PIB per capita: Carta 1 venceu\n");
} else if (pibperCapita1 < pibperCapita2) {
    pontosCarta2++;
    printf("PIB per capita: Carta 2 venceu\n");
} else {
    printf("PIB per capita: Empate\n");
}

// Super Poder
if (superPoder1 > superPoder2) {
    pontosCarta1++;
    printf("Super Poder: Carta 1 venceu\n");
} else if (superPoder1 < superPoder2) {
    pontosCarta2++;
    printf("Super Poder: Carta 2 venceu\n");
} else {
    printf("Super Poder: Empate\n");
}



    return 0;
}