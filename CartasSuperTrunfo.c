/*
  Super Trunfo de Cidades - Nível Novato

  Este programa permite o cadastro de duas cartas do jogo Super Trunfo,
  cada uma representando uma cidade. Para cada carta, o usuário deve informar:

    - Estado (letra de 'A' a 'H')
    - Código da Carta (ex: A01, B03)
    - Nome da Cidade
    - População
    - Área (em km^2)
    - PIB (em bilhões de reais)
    - Número de Pontos Turísticos

  Após o cadastro, o programa exibe as informações formatadas de forma clara.
  
  Regras:
    - Não utilizar estruturas de repetição (for, while) ou decisão (if, else)
    - Foco apenas na leitura, armazenamento e exibição dos dados
    - O programa deve ser simples, funcional e com boa legibilidade
*/

#include <stdio.h>
#include <string.h>

int main() {
    // Variaveis CARTA 1:
    char estado1[20];
    char codigo1[20];
    char cidade1[200];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // Variaveis CARTA 2:
    char estado2[20];
    char codigo2[20];
    char cidade2[200];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    // Entrada CARTA 1:
    printf("--------------CARTA 1--------------\n");
    // Estado1
    printf("Digite o estado [A-H]: ");
    fgets(estado1, sizeof(estado1), stdin); // Uso do fgets para evitar problema de buffer com input de strings
    estado1[strcspn(estado1, "\n")] = 0;
    // codigo1
    printf("Digite o codigo [Ex: A01, B02]: ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;
    // cidade1
    printf("Digite a cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;
    // populacao1
    printf("Digite a populacao: ");
    scanf("%i", &populacao1);
    getchar(); // getchar(); para limpeza do buffer para os proximos fgets funcionarem corretamente
    // area1
    printf("Digite a area [km^2]: ");
    scanf("%f", &area1);
    getchar();
    // pib1
    printf("Digite o PIB [R$]: ");
    scanf("%f", &pib1);
    getchar();
    // pontos_turisticos1
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%i", &pontos_turisticos1);
    getchar();
    
    // Entrada CARTA 2:
    printf("\n--------------CARTA 2--------------\n");
    // Estado2
    printf("Digite o estado [A-H]: ");
    fgets(estado2, sizeof(estado2), stdin);
    estado2[strcspn(estado2, "\n")] = 0;
    // codigo2
    printf("Digite o codigo [Ex: A01, B02]: ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;
    // cidade2
    printf("Digite a cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;
    // populacao2
    printf("Digite a populacao: ");
    scanf("%i", &populacao2);
    getchar();
    // area2
    printf("Digite a area [km^2]: ");
    scanf("%f", &area2);
    getchar();
    // pib2
    printf("Digite o PIB [R$]: ");
    scanf("%f", &pib2);
    getchar();
    // pontos_turisticos2
    printf("Digite a quantidade de pontos turisticos: ");
    scanf("%i", &pontos_turisticos2);
    getchar();
    
    // Saida CARTA 1:
    printf("\n--------------CARTA 1--------------\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %i\n", populacao1);
    printf("Area(km^2): %.2f\n", area1);
    printf("Pib(R$): %.2f\n", pib1);
    printf("Pontos Turisticos: %i\n", pontos_turisticos1);

    // Saida CARTA 2:
    printf("\n--------------CARTA 2--------------\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %i\n", populacao2);
    printf("Area(km^2): %.2f\n", area2);
    printf("Pib(R$): %.2f\n", pib2);
    printf("Pontos Turisticos: %i\n", pontos_turisticos2);

    return 0;
}
