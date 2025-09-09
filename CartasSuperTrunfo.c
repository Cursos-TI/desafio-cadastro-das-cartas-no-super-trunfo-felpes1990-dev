#include <stdio.h>

int main() {
    // Dados das Cartas
    char estado1, estado2;                         // Letras representando os estados
    char codigo1[4], codigo2[4];                   // Códigos como A01, D02 (3 caracteres + '\0')
    char nomeCidade1[50], nomeCidade2[50];         // Nomes das cidades
    int populacao1, populacao2;                    // População das cidades
    float area1, area2;                            // Área das cidades
    float pib1, pib2;                              // PIB das cidades
    int pontosTuristicos1, pontosTuristicos2;      // Número de pontos turísticos

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

    printf("\n");

    // Leitura dos dados da Carta 2
    printf("Cadastro da Carta 2:\n");

  
    printf("Digite o estado (A para Paraíba, D para Tocantins): ");
    scanf(" %c", &estado2);
    
      


    printf("Digite o código da carta (ex: A01 ou D02): ");
    scanf(" %3s", codigo2);  // Leitura do código da carta

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);  // Leitura do nome da cidade

    printf("Digite a população: ");
    scanf("%d", &populacao2);       // Leitura da população

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);            // Leitura da área

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);             // Leitura do PIB

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2); // Leitura dos pontos turísticos

    printf("\n");

    // Exibição dos dados da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n");

    // Exibição dos dados da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}