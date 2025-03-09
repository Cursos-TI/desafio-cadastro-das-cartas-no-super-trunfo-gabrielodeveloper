#include <stdio.h>

// Função para cadastrar uma cidade
void registerCity(char codeCity[], char name[], int *population, float *area, float *pib, int *numberOfTouristAttractions) {
    printf("\nDigite o código da cidade (formato A01, B02, etc.): ");
    scanf("%3s", codeCity);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(name, 30, stdin);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", population);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", pib);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", numberOfTouristAttractions);
}

int main() {
    // Variáveis para as duas cidades
    char codeCity1[4], name1[30];
    int population1, numberOfTouristAttractions1;
    float area1, pib1;

    char codeCity2[4], name2[30];
    int population2, numberOfTouristAttractions2;
    float area2, pib2;

    // Cadastro das cidades
    printf("Cadastro da primeira cidade:\n");
    registerCity(codeCity1, name1, &population1, &area1, &pib1, &numberOfTouristAttractions1);
  
    // Cálculo dos atributos derivados
    float populationDensity1 = population1 / area1;
    float pibPerCapita1 = pib1 / population1;
  
         // Exibição dos dados cadastrados
        printf("\n--- Resumo da Cidade Cadastrada ---\n");
        printf("Código da cidade: %s\n", codeCity1);
        printf("Nome da cidade: %s", name1);  // fgets já inclui a quebra de linha
        printf("População: %d habitantes\n", population1);
        printf("Área: %.2f km²\n", area1);
        printf("PIB: %.2f\n", pib1);
        printf("Número de pontos turísticos: %d\n", numberOfTouristAttractions1);
        printf("Densidade Populacional: %.2f hab/km²\n", populationDensity1);
        printf("PIB per Capita: %.2f reais \n", pibPerCapita1);

    printf("\nCadastro da segunda cidade:\n");
    registerCity(codeCity2, name2, &population2, &area2, &pib2, &numberOfTouristAttractions2);

    float populationDensity2 = population2 / area2;
    float pibPerCapita2 = pib2 / population2;
  
          // Exibição dos dados cadastrados
        printf("\n--- Resumo da Cidade Cadastrada ---\n");
        printf("Código da cidade: %s\n", codeCity2);
        printf("Nome da cidade: %s", name2);  // fgets já inclui a quebra de linha
        printf("População: %d habitantes\n", population2);
        printf("Área: %.2f km²\n", area2);
        printf("PIB: %.2f\n", pib2);
        printf("Número de pontos turísticos: %d\n", numberOfTouristAttractions2);
        printf("Densidade Populacional: %.2f hab/km²\n", populationDensity2);
        printf("PIB per Capita: %.2f reais \n", pibPerCapita2);

        // Comparação pela população
        printf("Comparação pelo atributo: População\n");
        printf("%s: %d habitantes \n", name1, population1);
        printf("%s: %d habitantes \n", name2, population2);

          if (population1 > population2)
              printf("Vencedor: %s \n", name1);
          else
              printf("Vencedor: %s \n", name2);

    return 0;
}