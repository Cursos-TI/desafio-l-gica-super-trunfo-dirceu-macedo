#include <stdio.h>

int main() {
    char estadoA[4];              // Sigla de um dos 27 estados + DF
    char codigoA[4];              // Ex: "A01", "B03"
    char nomeCidadeA[100];        // Nome da cidade
    unsigned long int populacaoA; // Número de habitantes
    float areaA;                  // Área em km²
    float pibA;                   // PIB da cidade
    int pontosTuristicosA;        // Número de pontos turísticos
    float densidadePopulacionalA; // Densidade Populacional
    float pibPerCapitaA;          // PIB per Capita
    float superPoderA;            // Super Poder

    char estadoB[4];              // Sigla de um dos 27 estados + DF
    char codigoB[4];              // Ex: "A01", "B03"
    char nomeCidadeB[100];        // Nome da cidade
    unsigned long int populacaoB; // Número de habitantes
    float areaB;                  // Área em km²
    float pibB;                   // PIB da cidade
    int pontosTuristicosB;        // Número de pontos turísticos
    float densidadePopulacionalB; // Densidade Populacional
    float pibPerCapitaB;          // PIB per Capita
    float superPoderB;            // Super Poder


    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (Sigla): ");
    scanf(" %s", estadoA); // espaço antes do %c para ignorar lixo do buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoA);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidadeA); // lê string com espaços

    printf("População: ");
    scanf("%lu", &populacaoA);

    printf("Área (em km²): ");
    scanf("%f", &areaA);

    printf("PIB: ");
    scanf("%f", &pibA);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosA);

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (Sigla): ");
    scanf(" %s", estadoB);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigoB);

    printf("Nome da Cidade: ");
    scanf(" %99[^\n]", nomeCidadeB);

    printf("População: ");
    scanf("%lu", &populacaoB);

    printf("Área (em km²): ");
    scanf("%f", &areaB);

    printf("PIB: ");
    scanf("%f", &pibB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicosB);

    // Cálculos necessários
    densidadePopulacionalA = (float)populacaoA / areaA;
    densidadePopulacionalB = (float)populacaoB / areaB;

    pibPerCapitaA = (float)(pibA * 1000000000.0) / populacaoA;
    pibPerCapitaB = (float)(pibB * 1000000000.0) / populacaoB;

    superPoderA = (float)(populacaoA + areaA + pibA + pibPerCapitaA + pontosTuristicosA) + (1.0f / densidadePopulacionalA);
    superPoderB = (float)(populacaoB + areaB + pibB + pibPerCapitaB + pontosTuristicosB) + (1.0f / densidadePopulacionalB);

    // Exibindo os dados cadastrados
    printf("\n=== Cartas Cadastradas ===\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estadoA);
    printf("Código: %s\n", codigoA);
    printf("Cidade: %s\n", nomeCidadeA);
    printf("População: %lu\n", populacaoA);
    printf("Área: %.2f km²\n", areaA);
    printf("PIB: %.2f bilhões de reais \n", pibA);
    printf("Pontos Turísticos: %d\n", pontosTuristicosA);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalA);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaA);
    printf("Super Poder: %.2f\n", superPoderA);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estadoB);
    printf("Código: %s\n", codigoB);
    printf("Cidade: %s\n", nomeCidadeB);
    printf("População: %lu\n", populacaoB);
    printf("Área: %.2f km²\n", areaB);
    printf("PIB: %.2f bilhões de reais \n", pibB);
    printf("Pontos Turísticos: %d\n", pontosTuristicosB);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacionalB);
    printf("PIB per Capita: %.2f reais\n", pibPerCapitaB);
    printf("Super Poder: %.2f\n", superPoderB);

    // Comparando População
    printf("\n=== Comparação de cartas (Atributo: População) ===\n");
    printf("Carta 1 - %s (%s): %lu habitantes\n", nomeCidadeA, estadoA, populacaoA);
    printf("Carta 2 - %s (%s): %lu habitantes\n", nomeCidadeB, estadoB, populacaoB);

    if(populacaoA > populacaoB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }

    // Comparando Área
    printf("\n=== Comparação de cartas (Atributo: Área) ===\n");
    printf("Carta 1 - %s (%s): %.2f km²\n", nomeCidadeA, estadoA, areaA);
    printf("Carta 2 - %s (%s): %.2f km²\n", nomeCidadeB, estadoB, areaB);

    if(areaA > areaB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }

    // Comparando PIB
    printf("\n=== Comparação de cartas (Atributo: PIB) ===\n");
    printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", nomeCidadeA, estadoA, pibA);
    printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", nomeCidadeB, estadoB, pibB);

    if(pibA > pibB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }

    // Comparando Pontos Turísticos
    printf("\n=== Comparação de cartas (Atributo: Pontos Turísticos) ===\n");
    printf("Carta 1 - %s (%s): %d pontos turísticos\n", nomeCidadeA, estadoA, pontosTuristicosA);
    printf("Carta 2 - %s (%s): %d pontos turísticos\n", nomeCidadeB, estadoB, pontosTuristicosB);

    if(pontosTuristicosA > pontosTuristicosB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }

    // Comparando Densidade Populacional
    printf("\n=== Comparação de cartas (Atributo: Densidade Populacional) ===\n");
    printf("Carta 1 - %s (%s): %.2f hab/km²\n", nomeCidadeA, estadoA, densidadePopulacionalA);
    printf("Carta 2 - %s (%s): %.2f hab/km²\n", nomeCidadeB, estadoB, densidadePopulacionalB);

    if(densidadePopulacionalA < densidadePopulacionalB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }

    // Comparando PIB per Capita
    printf("\n=== Comparação de cartas (Atributo: PIB per Capita) ===\n");
    printf("Carta 1 - %s (%s): %.2f reais\n", nomeCidadeA, estadoA, pibPerCapitaA);
    printf("Carta 2 - %s (%s): %.2f reais\n", nomeCidadeB, estadoB, pibPerCapitaB);

    if(pibPerCapitaA > pibPerCapitaB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }

    // Comparando Super Poder
    printf("\n=== Comparação de cartas (Atributo: Super Poder) ===\n");
    printf("Carta 1 - %s (%s): %.2f pontos\n", nomeCidadeA, estadoA, superPoderA);
    printf("Carta 2 - %s (%s): %.2f pontos\n", nomeCidadeB, estadoB, superPoderB);

    if(superPoderA > superPoderB){
      printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidadeA);
    } else {
      printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidadeB);
    }
  

    return 0;

}