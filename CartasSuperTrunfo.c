#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
   //Variaveis para cadastro.
   char contry[25];
   int codeCity;
   char name[20];
   float population;
   float area;
   float pib;
   int numberOfTouristAttractions;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Entrada e saída de dados.
    printf("Olá este é o jogo de super trunfo onde você deve cadastrar suas cartas. \n");

    printf("Digite o nome de um país! \n");
    scanf("%24s", contry);  // Melhor prática: limitar o tamanho da string

    printf("Digite o código de uma cidade da sua escolha. \n");
    scanf("%d", &codeCity);

    printf("Digite o nome dessa cidade. \n");
    getchar();  // Consumir o '\n' que ficou no buffer
    fgets(name, sizeof(name), stdin);

    printf("Digite quantos habitantes residem nesta cidade. \n");
    scanf("%f", &population);

    printf("Digite qual é a área dessa cidade em km². \n");
    scanf("%f", &area);

    printf("Digite qual é o PIB da cidade escolhida. \n");
    scanf("%f", &pib);

    printf("E por último, digite a quantidade de pontos turísticos da cidade. \n");
    scanf("%d", &numberOfTouristAttractions);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Exibindo os valores das entradas de dados.

    printf("\n--- Resumo da Cidade Cadastrada ---\n");
    printf("País escolhido: %s\n", contry);
    printf("Código da cidade: %d\n", codeCity);
    printf("Nome da cidade: %s", name);  // `fgets` já inclui a quebra de linha
    printf("Quantidade de habitantes: %.2f\n", population);
    printf("Área da cidade: %.2f km²\n", area);
    printf("PIB da cidade: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", numberOfTouristAttractions);

    return 0;
}
