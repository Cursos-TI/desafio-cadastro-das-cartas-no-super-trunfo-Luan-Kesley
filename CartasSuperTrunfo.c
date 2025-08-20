#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Declarando as variáveis
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[20], cidade2[20];
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    int pop1, pop2;

    // Cadastro das informações da Carta 1:
    printf("Informe uma letra de 'A' a 'H' para representar o estado da Carta 1: \n");
    scanf(" %c", &estado1);

    printf("Informe o código da Carta 1 (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", &codigo1);
    
    printf("Informe o nome da cidade da Carta 1: \n");
    scanf("%s", &cidade1);

    printf("Informe a população da cidade da Carta 1: \n");
    scanf("%d", &pop1);     

    printf("Informe a área (em km²) da cidade da Carta 1: \n");
    scanf("%f", &area1);    

    printf("Informe o PIB da cidade da Carta 1: \n");
    scanf("%f", &pib1);    

    printf("Informe o número de pontos turísticos da cidade da Carta 1: \n");
    scanf("%d", &turistico1);    
    

    // Cadastro das informações da Carta 2:
    printf("Informe uma letra de 'A' a 'H' para representar o estado da Carta 2: \n");
    scanf(" %c", &estado2);

    printf("Informe o código da Carta 2 (A letra do estado seguida de um número de 01 a 04): \n");
    scanf("%s", &codigo2);
    
    printf("Informe o nome da cidade da Carta 2: \n");
    scanf("%s", &cidade2);

    printf("Informe a população da cidade da Carta 2: \n");
    scanf("%d", &pop2);     

    printf("Informe a área (em km²) da cidade da Carta 2: \n");
    scanf("%f", &area2);    

    printf("Informe o PIB da cidade da Carta 2: \n");
    scanf("%f", &pib2);    

    printf("Informe o número de pontos turísticos da cidade da Carta 2: \n");
    scanf("%d", &turistico2);


    // Exibição dos Dados das Cartas:
    //Carta 1:
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", pop1);
    printf("Área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Número de pontos Turísticos: %d\n", turistico1);

    //Carta 2:
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", pop2);
    printf("Área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos Turísticos: %d\n", turistico2);
   

    return 0;
}
