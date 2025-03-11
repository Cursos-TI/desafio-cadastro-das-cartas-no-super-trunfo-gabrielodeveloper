#include <stdio.h>

// Estrutura para armazenar os atributos de uma cidade
typedef struct {
    char code[4];
    char name[30];
    int population;
    float area;
    float pib;
    int numberOfTouristAttractions;
    float populationDensity;
} City;

// Função para cadastrar uma cidade.
void registerCity(City *city) {
    printf("\nDigite o código da cidade (formato A01, B02, etc.): ");
    scanf("%3s", city->code);
    getchar();

    printf("Digite o nome da cidade: ");
    fgets(city->name, 30, stdin);

    printf("Digite a quantidade de habitantes da cidade: ");
    scanf("%d", &city->population);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &city->area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &city->pib);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &city->numberOfTouristAttractions);
    
    // Cálculo da densidade populacional
    city->populationDensity = city->population / city->area;
}

// Função para comparar os atributos
void compareAttributes(City c1, City c2, int choice) {
    printf("\nComparação pelo atributo selecionado:\n");
    switch (choice) {
        case 1:
            printf("População: %d vs %d\n", c1.population, c2.population);
            if (c1.population > c2.population) printf("Vencedor: %s", c1.name);
            else if (c2.population > c1.population) printf("Vencedor: %s", c2.name);
            else printf("Empate!\n");
            break;
        case 2:
            printf("PIB: %.2f vs %.2f\n", c1.pib, c2.pib);
            if (c1.pib > c2.pib) printf("Vencedor: %s", c1.name);
            else if (c2.pib > c1.pib) printf("Vencedor: %s", c2.name);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Pontos turísticos: %d vs %d\n", c1.numberOfTouristAttractions, c2.numberOfTouristAttractions);
            if (c1.numberOfTouristAttractions > c2.numberOfTouristAttractions) printf("Vencedor: %s", c1.name);
            else if (c2.numberOfTouristAttractions > c1.numberOfTouristAttractions) printf("Vencedor: %s", c2.name);
            else printf("Empate!\n");
            break;
        default:
            printf("Opção inválida!\n");
    }
}

int main() {
    City city1, city2;
    int choice;

    //Cadastrar das cidades 
    printf("Cadastro do primeira cidade:\n");
    registercity(&city1);
    printf("Cadastro do segunda cidade:\n");
    registercity(&city2);

    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - PIB\n");
    printf("3 - Número de pontos turísticos\n");
    printf("Digite sua escolha: ");
    scanf("%d", &choice);

    compareAttributes(city1, city1, choice);

    return 0;
}