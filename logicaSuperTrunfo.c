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

    int resultado1, resultado2;
    char primeiroAtributo, segundoAtributo;

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

    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    printf("Digite o primeiro atributo escolhido: \n");
    scanf("%d", &primeiroAtributo);

    
    switch (primeiroAtributo) {
    
    case 1:
      printf("Você escolheu o atributo População\n");
      resultado1 = populacaoA > populacaoB ? 1 : 0;
    break;

    case 2:
      printf("Você escolheu o atributo Área\n");
      resultado1 = areaA > areaB ? 1 : 0;
    break;

    case 3:
    printf("Você escolheu o atributo PIB\n");
      resultado1 = pibA > pibB ? 1 : 0;
    break;

    case 4:
    printf("Você escolheu o atributo Número de Pontos Turísticos\n");
      resultado1 = pontosTuristicosA > pontosTuristicosB ? 1 : 0;
    break;

    case 5:
    printf("Você escolheu o atributo Densidade Populacional\n");
      resultado1 = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
    break;

    case 6:
    printf("Você escolheu o atributo Super Poder\n");
      resultado1 = superPoderA > superPoderB ? 1 : 0;
    break;

    default:
      printf("Opção inválida. Tente novamente.\n");
    }

    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB \n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. Super Poder\n");
    printf("Digite o segundo atributo escolhido: \n");
    scanf("%d", &segundoAtributo);

    
    if(primeiroAtributo == segundoAtributo)
    {
      printf("Você escolheu o mesmo atributo!");
    }
    else {

      switch (segundoAtributo) {
    
    case 1:
      printf("Você escolheu o atributo População\n");
      resultado2 = populacaoA > populacaoB ? 1 : 0;
    break;

    case 2:
      printf("Você escolheu o atributo Área\n");
      resultado2 = areaA > areaB ? 1 : 0;
    break;

    case 3:
    printf("Você escolheu o atributo PIB\n");
      resultado2 = pibA > pibB ? 1 : 0;
    break;

    case 4:
    printf("Você escolheu o atributo Número de Pontos Turísticos\n");
      resultado2 = pontosTuristicosA > pontosTuristicosB ? 1 : 0;
    break;

    case 5:
    printf("Você escolheu o atributo Densidade Populacional\n");
      resultado2 = densidadePopulacionalA < densidadePopulacionalB ? 1 : 0;
    break;

    case 6:
    printf("Você escolheu o atributo Super Poder\n");
      resultado2 = superPoderA > superPoderB ? 1 : 0;
    break;

    default:
      printf("Opção inválida. Tente novamente.\n");
    }

    if (resultado1 && resultado2)
    {
      printf("Parabéns, você venceu!\n");
    } else if (resultado1 =! resultado2){
      printf("Empatou!\n");
    } else {
      printf("Infelizmente, você perdeu\n");
    }
    

    }

    

    return 0;

}