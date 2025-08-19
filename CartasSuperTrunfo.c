#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Autor: Paulo
// 15/08/2025

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
    int populacao1;             // População da cidade (número inteiro)
    float area1;                // Área da cidade em km² (número decimal)
    float pib1;                 // PIB da cidade em bilhões (número decimal)
    int pontos_turisticos1;     // Quantidade de pontos turísticos (número inteiro)
    float densidade_popul1;     // Densidade populacional (será calculada após entrada dos dados)
    float pib_percapita1;       // PIB per capita (será calculado após entrada dos dados)
    
    // Variáveis para armazenar os dados da Carta 2
    char estado2;               // Estado representado por uma letra (A-H)
    char codigo2[4];           // Código da carta (ex: B02) - array de 4 chars
    char cidade2[50];          // Nome da cidade - array de 50 chars
    int populacao2;            // População da cidade (número inteiro)
    float area2;               // Área da cidade em km² (número decimal)
    float pib2;                // PIB da cidade em bilhões (número decimal)
    int pontos_turisticos2;    // Quantidade de pontos turísticos (número inteiro)
    float densidade_popul2;     // Densidade populacional (será calculada após entrada dos dados)
    float pib_percapita2;       // PIB per capita (será calculado após entrada dos dados)

    
    // Boas-vindas e instruções para o usuário
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");
    printf("Vamos cadastrar duas cartas do Super Trunfo de Países!\n\n");
    
    // Coleta de dados da Carta 1
    printf("--- CADASTRO DA CARTA 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê string com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculo dos valores derivados da Carta 1
    densidade_popul1 = populacao1 / area1;
    pib_percapita1 = (pib1 * 1000000000) / populacao1; // Convertendo bilhões para reais
    
    printf("\n");
    
    /* 
     * SEÇÃO 4: COLETA DE DADOS DA SEGUNDA CARTA
     * 
     * Repete o mesmo processo da primeira carta para coletar os dados
     * da segunda carta. Mantemos a mesma estrutura e tipos de scanf()
     * para consistência no programa.
     */
    printf("--- CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);  // Lê caractere do estado
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);  // Lê string do código
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);  // Lê nome completo da cidade com espaços
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);  // Lê número inteiro da população
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);  // Lê número decimal da área
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);  // Lê número decimal do PIB
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);  // Lê número inteiro dos pontos turísticos
    
    // Cálculo dos valores derivados da Carta 2
    densidade_popul2 = populacao2 / area2;
    pib_percapita2 = (pib2 * 1000000000) / populacao2; // Convertendo bilhões para reais
    
    printf("\n");  // Linha em branco para separar seções
    
    /* 
     * SEÇÃO 5: EXIBIÇÃO DOS RESULTADOS
     * 
     * Esta seção apresenta todas as informações coletadas de forma
     * organizada e formatada. Utiliza diferentes especificadores de
     * formato no printf() para cada tipo de dado.
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
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);          // %d para inteiro
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_popul1);       // %.2f para float com 2 casas decimais
    printf("PIB per Capita: %.2f reais\n", pib_percapita1);                   // %.2f para float com 2 casas decimais
    
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
    printf("PIB per Capita: %.2f reais\n", pib_percapita2);                // %.2f para float com 2 casas decimais
    
    /* 
     * MENSAGEM DE FINALIZAÇÃO
     * Confirma ao usuário que o processo foi concluído com sucesso.
     */
    printf("\n=== CADASTRO CONCLUÍDO ===\n");
    
    /* 
     * RETORNO DA FUNÇÃO MAIN
     * 
     * O valor 0 indica que o programa foi executado com sucesso.
     * Este é um padrão em programação C para indicar execução sem erros.
     */
    return 0;
}