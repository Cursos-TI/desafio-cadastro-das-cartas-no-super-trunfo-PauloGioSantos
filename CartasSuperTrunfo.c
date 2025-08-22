#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Autor: Paulo
// 22/08/2025

int main() {
    /* 
     * SEÇÃO 1: DECLARAÇÃO DE VARIÁVEIS
     * 
     * Declaramos todas as variáveis necessárias para armazenar os dados
     * de duas cartas do Super Trunfo. Cada carta possui 7 atributos.
     */
    
    // Variáveis para armazenar os dados da Carta 1
    char estado1;                // Estado representado por uma letra (A-H)
    char codigo1[4];            // Código da carta (ex: A01) - array de 4 chars
    char cidade1[50];           // Nome da cidade - array de 50 chars para comportar nomes longos
    unsigned long int populacao1;  // População da cidade (número inteiro sem sinal, maior capacidade)
    float area1;                // Área da cidade em km² (número decimal)
    float pib1;                 // PIB da cidade em bilhões (número decimal)
    int pontos_turisticos1;     // Quantidade de pontos turísticos (número inteiro)
    float densidade_popul1;     // Densidade populacional (será calculada após entrada dos dados)
    float pib_percapita1;       // PIB per capita (será calculado após entrada dos dados)
    float super_poder1;         // Super Poder da carta (calculado após entrada dos dados)
    
    // Variáveis para armazenar os dados da Carta 2
    char estado2;               // Estado representado por uma letra (A-H)
    char codigo2[4];           // Código da carta (ex: B02) - array de 4 chars
    char cidade2[50];          // Nome da cidade - array de 50 chars
    unsigned long int populacao2;  // População da cidade (número inteiro sem sinal, maior capacidade)
    float area2;               // Área da cidade em km² (número decimal)
    float pib2;                // PIB da cidade em bilhões (número decimal)
    int pontos_turisticos2;    // Quantidade de pontos turísticos (número inteiro)
    float densidade_popul2;     // Densidade populacional (será calculada após entrada dos dados)
    float pib_percapita2;       // PIB per capita (será calculado após entrada dos dados)
    float super_poder2;         // Super Poder da carta (calculado após entrada dos dados)
  
    
    // Boas-vindas e instruções para o usuário
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    printf("Vamos cadastrar duas cartas do Super Trunfo de Países!\n\n");
    
     /* 
     * SEÇÃO 2: COLETA DE DADOS DA PRIMEIRA CARTA
     */

    // Coleta de dados da Carta 1
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculo dos valores derivados da Carta 1
    densidade_popul1 = (float) populacao1 / area1; // Conversão explícita para float
    pib_percapita1 = (pib1 * 1000000000.0f) / (float) populacao1; // Convertendo bilhões para reais

    // Cálculo do Super Poder da Carta 1
    // Super Poder = população + área + PIB + pontos turísticos + PIB per capita + (1/densidade populacional)
    super_poder1 = (float) populacao1 + area1 + pib1 + (float) pontos_turisticos1 + 
                   pib_percapita1 + (1.0f / densidade_popul1);
    
    printf("\n");
    
    /* 
     * SEÇÃO 3: COLETA DE DADOS DA SEGUNDA CARTA
     */

    printf("--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);  // Lê caractere do estado
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);  // Lê string do código
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);  // Lê nome completo da cidade com espaços
    
    printf("Digite a população: ");
    scanf("%lu", &populacao2);  // Lê número inteiro da população
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);  // Lê número decimal da área
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);  // Lê número decimal do PIB
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);  // Lê número inteiro dos pontos turísticos
    
   // Cálculo dos valores derivados da Carta 2
    densidade_popul2 = (float) populacao2 / area2;  // Conversão explícita para float
    pib_percapita2 = (pib2 * 1000000000.0f) / (float) populacao2; // Convertendo bilhões para reais
    
    // Cálculo do Super Poder da Carta 2
    super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_turisticos2 + 
                   pib_percapita2 + (1.0f / densidade_popul2);
    
    printf("\n");  // Linha em branco para separar seções
    
   /* 
     * SEÇÃO 4: EXIBIÇÃO DOS DADOS DAS CARTAS
     */
    printf("=== CARTAS CADASTRADAS ===\n\n");
    
    /* 
     * EXIBIÇÃO DA PRIMEIRA CARTA
     * 
     * Mostra todos os dados da primeira carta usando printf() com
     * especificadores de formato apropriados para cada tipo de variável.
     */
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);                    // %c para caractere
    printf("Código: %s\n", codigo1);                    // %s para string
    printf("Nome da Cidade: %s\n", cidade1);            // %s para string
    printf("População: %d\n", populacao1);              // %d para inteiro
    printf("Área: %.2f km²\n", area1);                  // %.2f para float com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib1);       // %.2f para float com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);     // %d para inteiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_popul1);  // %.2f para float com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);      // %.2f para float com 2 casas decimais
    printf("Super Poder: %.2f\n", super_poder1);        // %.2f para float com 2 casas decimais
    
    printf("\n\n");  // Linha em branco entre as cartas
    
    /* 
     * EXIBIÇÃO DA SEGUNDA CARTA
     * 
     * Repete a mesma formatação da primeira carta para manter
     * consistência visual na apresentação dos dados.
     */
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);                    // %c para caractere
    printf("Código: %s\n", codigo2);                    // %s para string
    printf("Nome da Cidade: %s\n", cidade2);            // %s para string
    printf("População: %d\n", populacao2);              // %d para inteiro
    printf("Área: %.2f km²\n", area2);                  // %.2f para float com 2 casas decimais
    printf("PIB: %.2f bilhões de reais\n", pib2);       // %.2f para float com 2 casas decimais
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);       // %d para inteiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_popul2);    // %.2f para float com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);   // %.2f para float com 2 casas decimais
    printf("Super Poder: %.2f\n", super_poder2);        // %.2f para float com 2 casas decimais

    /* 
     * SEÇÃO 5: COMPARAÇÃO DAS CARTAS E BATALHA
     * 
     * Aqui realizamos as comparações atributo por atributo.
     * Para densidade populacional: menor valor vence (melhor qualidade de vida)
     * Para demais atributos: maior valor vence
     */
    printf("=== BATALHA DE CARTAS ===\n\n");
    printf("Comparação de Cartas:\n\n");
    
    // Comparação População (maior vence)
    int resultado_populacao = populacao1 > populacao2;
    printf("População: Carta %d venceu (%d)\n", 
           resultado_populacao ? 1 : 2, resultado_populacao);
    
    // Comparação Área (maior vence)
    int resultado_area = area1 > area2;
    printf("Área: Carta %d venceu (%d)\n", 
           resultado_area ? 1 : 2, resultado_area);
    
    // Comparação PIB (maior vence)
    int resultado_pib = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", 
           resultado_pib ? 1 : 2, resultado_pib);
    
    // Comparação Pontos Turísticos (maior vence)
    int resultado_turismo = pontos_turisticos1 > pontos_turisticos2;
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
           resultado_turismo ? 1 : 2, resultado_turismo);
    
    // Comparação Densidade Populacional (menor vence - invertida)
    int resultado_densidade = densidade_popul1 < densidade_popul2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
           resultado_densidade ? 1 : 2, resultado_densidade);
    
    // Comparação PIB per Capita (maior vence)
    int resultado_pib_percapita = pib_percapita1 > pib_percapita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", 
           resultado_pib_percapita ? 1 : 2, resultado_pib_percapita);
    
    // Comparação Super Poder (maior vence)
    int resultado_super_poder = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", 
           resultado_super_poder ? 1 : 2, resultado_super_poder);
    /* 
     * SEÇÃO 6: RESULTADO FINAL DA BATALHA
     * 
     * Contamos quantas batalhas cada carta venceu para determinar
     * a carta vencedora geral.
     */
    printf("\n=== RESULTADO FINAL DA BATALHA ===\n");
    
    int vitorias_carta1 = resultado_populacao + resultado_area + resultado_pib + 
                         resultado_turismo + resultado_densidade + 
                         resultado_pib_percapita + resultado_super_poder;
    
    int vitorias_carta2 = 7 - vitorias_carta1; // Total de 7 comparações
    
    printf("Carta 1 (%s): %d vitórias\n", cidade1, vitorias_carta1);
    printf("Carta 2 (%s): %d vitórias\n", cidade2, vitorias_carta2);
    
    if (vitorias_carta1 > vitorias_carta2) {
        printf("\n🏆 CARTA 1 (%s) É A GRANDE VENCEDORA! 🏆\n", cidade1);
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("\n🏆 CARTA 2 (%s) É A GRANDE VENCEDORA! 🏆\n", cidade2);
    } else {
        printf("\n🤝 EMPATE! Ambas as cartas são igualmente poderosas! 🤝\n");
    }
    
    printf("\n=== BATALHA CONCLUÍDA ===\n");
    
    /* 
     * RETORNO DA FUNÇÃO MAIN
     * 
     * O valor 0 indica que o programa foi executado com sucesso.
     * Este é um padrão em programação C para indicar execução sem erros.
     */
    return 0;
}