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
    int iCarta = 1;
    char sEstado = 'A';
    char codCarta[3] = "A01";
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
    // Lançando dados da carta 1 ▼
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
    // Exibindo dados da carta A01 ▼
    printf("Carta %d", iCarta);
    printf("Estado: %s", sEstado);
    printf("Código: %s", codCarta);
    printf("Nome da cidade: %s", nomeCidade);
    printf("População: %d", iPopulacao);
    printf("Área: %f", areaTerritorio);
    printf("PIB: %f", fPIB);
    printf("Número de Pontos Turísticos: %d", numPTuristicos);

    return 0;
}
