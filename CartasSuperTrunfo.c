#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de 
// cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Definição de variáveis 2025/02/27 ▼
    int iCarta_a = 1, iCarta_b = 2;
    char sEstado = 'A', rEstado = 'B';
    char codCarta_1[2] = "A01", codCarta_2[2] = "B01";
    char nomeCidade[30];
    int iPopulacao;
    float areaTerritorio;
    float fPIB;
    int numPTuristicos;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    // ----------------------------------------------------------------------------
    // Inserindo dados da carta 1 ▼
    printf("Digite o nome da 1ª cidade:\n");
    scanf("%s", &nomeCidade);
    printf("Digite o número da população:\n");
    scanf("%i", &iPopulacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &areaTerritorio);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &fPIB);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d\n", &numPTuristicos);

    // Exibindo dados da carta 1 ▼
    printf("Carta........................: %d\n", iCarta_a);
    printf("Estado.......................: %c\n", sEstado);
    printf("Código.......................: %s\n", codCarta_1);
    printf("Nome da cidade...............: %s\n", nomeCidade);
    printf("População....................: %d\n", iPopulacao);
    printf("Área.........................: %f\n", areaTerritorio);
    printf("PIB..........................: %f\n", fPIB);
    printf("Número de Pontos Turísticos..: %d\n", numPTuristicos);

    // Inserindo dados da Carta 2
    printf("Digite o nome da 1ª cidade:\n");
    scanf("%s", &nomeCidade);
    printf("Digite o número da população:\n");
    scanf("%i", &iPopulacao);
    printf("Digite a área da cidade:\n");
    scanf("%f", &areaTerritorio);
    printf("Digite o PIB da cidade:\n");
    scanf("%f", &fPIB);
    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &numPTuristicos);


    // Exibindo dados Carta 2 ▼
    printf("Carta........................: %d\n", iCarta_b);
    printf("Estado.......................: %c\n", rEstado);
    printf("Código.......................: %s\n", codCarta_2);
    printf("Nome da cidade...............: %s\n", nomeCidade);
    printf("População....................: %d\n", iPopulacao);
    printf("Área.........................: %f\n", areaTerritorio);
    printf("PIB..........................: %f\n", fPIB);
    printf("Número de Pontos Turísticos..: %d\n", numPTuristicos);

    return 0;
}
