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

    int atributoEscolhido;        // Atributo escolhido pelo jogador

    // Formulário
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (Ex: MG, SP): ");
    scanf(" %3s", estadoA); // espaço antes do %s para ignorar lixo do buffer / "3" lê no máximo 3 caracteres

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigoA); // Lê no máximo 3 caracteres (para 'A01\0'), garantindo espaço para o '\0'

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
    printf("Estado (Ex: MG, SP): ");
    scanf(" %3s", estadoB);

    printf("Código da Carta (ex: A01): ");
    scanf("%3s", codigoB);

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

    float inversoDensidadeA = (densidadePopulacionalA != 0.0f) ? (1.0f / densidadePopulacionalA) : 0.0f;
    float inversoDensidadeB = (densidadePopulacionalB != 0.0f) ? (1.0f / densidadePopulacionalB) : 0.0f;

    pibPerCapitaA = (float)(pibA * 1000000000.0) / populacaoA;
    pibPerCapitaB = (float)(pibB * 1000000000.0) / populacaoB;

    superPoderA = (float)(populacaoA + areaA + pibA + pibPerCapitaA + pontosTuristicosA) + inversoDensidadeA;
    superPoderB = (float)(populacaoB + areaB + pibB + pibPerCapitaB + pontosTuristicosB) + inversoDensidadeB;        


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

    // Menu interativo de comparação
    printf("*** JOGO SUPER TRUNFO ***\n");
    printf("Escolha o atributo para comparar as cartas\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    printf("Digite o atributo escolhido: \n");
    scanf("%d", &atributoEscolhido);

    switch (atributoEscolhido) {
    
    //Case 1
    case 1:
    printf("**** %s X %s ****\n", nomeCidadeA, nomeCidadeB);
    printf("Atributo usado na comparação: População\n");
    printf("População de %s: %lu habitantes X População de %s: %lu habitantes\n", nomeCidadeA, populacaoA, nomeCidadeB, populacaoB);
      if (populacaoA > populacaoB) {
        printf("Carta %s venceu!\n", nomeCidadeA);
    } else if (populacaoA < populacaoB) {
        printf("Carta %s venceu!\n", nomeCidadeB);
    } else {
      printf("Empate!\n");
    }
    break;
    //fim Case 1

    //Case 2
    case 2:
    printf("**** %s X %s ****\n", nomeCidadeA, nomeCidadeB);
    printf("Atributo usado na comparação: Área\n");
    printf("Área de %s: %.2f km² X Área de %s: %.2f km²\n", nomeCidadeA, areaA, nomeCidadeB, areaB);
      if (areaA > areaB) {
        printf("Carta %s venceu!\n", nomeCidadeA);
    } else if (areaA < areaB) {
        printf("Carta %s venceu!\n", nomeCidadeB);
    } else {
      printf("Empate!\n");
    }
    break;
    //fim Case 2

    //Case 3
    case 3:
    printf("**** %s X %s ****\n", nomeCidadeA, nomeCidadeB);
    printf("Atributo usado na comparação: PIB\n");
    printf("PIB de %s: %.2f bilhões de reais X PIB de %s: %.2f bilhões de reais\n", nomeCidadeA, pibA, nomeCidadeB, pibB);
      if (pibA > pibB) {
        printf("Carta %s venceu!\n", nomeCidadeA);
    } else if (pibA < pibB) {
        printf("Carta %s venceu!\n", nomeCidadeB);
    } else {
      printf("Empate!\n");
    }
    break;
    //fim Case 3

    //Case 4
    case 4:
    printf("**** %s X %s ****\n", nomeCidadeA, nomeCidadeB);
    printf("Atributo usado na comparação: Pontos Turísticos\n");
    printf("Pontos Turísticos de %s: %d X Pontos Turísticos de %s: %d\n", nomeCidadeA, pontosTuristicosA, nomeCidadeB, pontosTuristicosB);
      if (pontosTuristicosA > pontosTuristicosB) {
        printf("Carta %s venceu!\n", nomeCidadeA);
    } else if (pontosTuristicosA < pontosTuristicosB) {
        printf("Carta %s venceu!\n", nomeCidadeB);
    } else {
      printf("Empate!\n");
    }
    break;
    //fim Case 4

    //Case 5
    case 5:
    printf("**** %s X %s ****\n", nomeCidadeA, nomeCidadeB);
    printf("Atributo usado na comparação: Densidade Populacional\n");
    printf("Densidade Populacional de %s: %.2f X Densidade Populacional de %s: %.2f\n", nomeCidadeA, densidadePopulacionalA, nomeCidadeB, densidadePopulacionalB);
      if (densidadePopulacionalA < densidadePopulacionalB) {
        printf("Carta %s venceu!\n", nomeCidadeA);
    } else if (densidadePopulacionalA > densidadePopulacionalB) {
        printf("Carta %s venceu!\n", nomeCidadeB);
    } else {
      printf("Empate!\n");
    }
    break;
    //fim Case 5

    //Case 6
    case 6:
    printf("**** %s X %s ****\n", nomeCidadeA, nomeCidadeB);
    printf("Atributo usado na comparação: Super Poder\n");
    printf("Super Poder de %s: %.2f X Super Poder de %s: %.2f\n", nomeCidadeA, superPoderA, nomeCidadeB, superPoderB);
      if (superPoderA > superPoderB) {
        printf("Carta %s venceu!\n", nomeCidadeA);
    } else if (superPoderA < superPoderB) {
        printf("Carta %s venceu!\n", nomeCidadeB);
    } else {
      printf("Empate!\n");
    }
    break;
    //fim Case 6

    default:
      printf("Opção inválida. Tente novamente.\n");
    }

    return 0;

}