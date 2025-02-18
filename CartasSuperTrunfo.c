#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Variáveis para cadastro
    char codeCity[4];  // Código da cidade no formato "A01", "B02", etc.
    char name[30];      // Nome da cidade
    float population;
    float area;
    float pib;
    int numberOfTouristAttractions;
    char continuar;

    printf("Olá, este é o jogo de Super Trunfo! Cadastre suas cartas.\n");

    do {
        // Cadastro da cidade
        printf("\nDigite o código da cidade (formato A01, B02, etc.): ");
        scanf("%3s", codeCity);

        getchar();  // Consumir '\n' do buffer

        printf("Digite o nome da cidade: ");
        fgets(name, sizeof(name), stdin);

        printf("Digite a quantidade de habitantes da cidade: ");
        scanf("%f", &population);

        printf("Digite a área da cidade em km²: ");
        scanf("%f", &area);

        printf("Digite o PIB da cidade: ");
        scanf("%f", &pib);

        printf("Digite a quantidade de pontos turísticos da cidade: ");
        scanf("%d", &numberOfTouristAttractions);

        // Exibição dos dados cadastrados
        printf("\n--- Resumo da Cidade Cadastrada ---\n");
        printf("Código da cidade: %s\n", codeCity);
        printf("Nome da cidade: %s", name);  // `fgets` já inclui a quebra de linha
        printf("População: %.2f habitantes\n", population);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Número de pontos turísticos: %d\n", numberOfTouristAttractions);

        // Pergunta se deseja cadastrar outra cidade
        printf("\nDeseja cadastrar outra cidade? (S/N): ");
        scanf(" %c", &continuar);

    } while (continuar == 'S' || continuar == 's');

    return 0;
}
