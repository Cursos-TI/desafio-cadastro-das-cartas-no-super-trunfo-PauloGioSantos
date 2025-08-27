#include <stdio.h>

// Desafio Super Trunfo - Países - NÍVEL NOVATO
// Comparação de Cartas com Foco em Um Atributo
// Este código implementa a lógica básica de comparação entre duas cartas
// Autor: Paulo
// Data: 25/08/2025

int main() {
    /* 
     * SEÇÃO 1: DECLARAÇÃO DE VARIÁVEIS
     * 
     * Declaramos todas as variáveis necessárias para armazenar os dados
     * de duas cartas do Super Trunfo conforme especificações do desafio.
     */
    
    // Variáveis para armazenar os dados da Carta 1
    char estado1[3];                // Estado representado por sigla (ex: SP)
    char codigo1[4];                // Código da carta (ex: A01)
    char cidade1[50];               // Nome da cidade
    int populacao1;                 // População da cidade
    float area1;                    // Área da cidade em km²
    float pib1;                     // PIB da cidade em bilhões
    int pontos_turisticos1;         // Quantidade de pontos turísticos
    float densidade_popul1;         // Densidade populacional (calculada)
    float pib_percapita1;           // PIB per capita (calculado)
    
    // Variáveis para armazenar os dados da Carta 2
    char estado2[3];                // Estado representado por sigla (ex: RJ)
    char codigo2[4];                // Código da carta (ex: B02)
    char cidade2[50];               // Nome da cidade
    int populacao2;                 // População da cidade
    float area2;                    // Área da cidade em km²
    float pib2;                     // PIB da cidade em bilhões
    int pontos_turisticos2;         // Quantidade de pontos turísticos
    float densidade_popul2;         // Densidade populacional (calculada)
    float pib_percapita2;           // PIB per capita (calculado)

    // Boas-vindas e instruções para o usuário
    printf("🎮 === SUPER TRUNFO - COMPARAÇÃO DE CARTAS === 🎮\n\n");
    printf("Vamos cadastrar duas cartas e compará-las!\n");
    printf("A batalha será baseada no atributo: POPULAÇÃO 👥\n\n");
    
    /* 
     * SEÇÃO 2: COLETA DE DADOS DA PRIMEIRA CARTA
     * 
     * Solicitamos ao usuário que insira todas as informações
     * necessárias para a primeira carta do Super Trunfo.
     */
    printf("--- 📝 CADASTRO DA CARTA 1 ---\n");
    
    printf("Digite o estado (ex: SP): ");
    scanf("%s", estado1);
    
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
    densidade_popul1 = (float)populacao1 / area1;
    pib_percapita1 = (pib1 * 1000000000.0f) / (float)populacao1; // Convertendo bilhões para reais
    
    printf("\n");
    
    /* 
     * SEÇÃO 3: COLETA DE DADOS DA SEGUNDA CARTA
     * 
     * Repetimos o mesmo processo para a segunda carta,
     * mantendo a consistência na coleta de dados.
     */
    printf("--- 📝 CADASTRO DA CARTA 2 ---\n");
    
    printf("Digite o estado (ex: RJ): ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo dos valores derivados da Carta 2
    densidade_popul2 = (float)populacao2 / area2;
    pib_percapita2 = (pib2 * 1000000000.0f) / (float)populacao2; // Convertendo bilhões para reais
    
    printf("\n");
    
    /* 
     * SEÇÃO 4: EXIBIÇÃO DOS DADOS DAS CARTAS
     * 
     * Apresentamos de forma organizada todos os dados coletados
     * e calculados para ambas as cartas antes da comparação.
     */
    printf("📋 === CARTAS CADASTRADAS === 📋\n\n");
    
    // Exibição completa da Carta 1
    printf("🃏 Carta 1:\n");
    printf("   Estado: %s\n", estado1);
    printf("   Código: %s\n", codigo1);
    printf("   Cidade: %s\n", cidade1);
    printf("   População: %d habitantes\n", populacao1);
    printf("   Área: %.2f km²\n", area1);
    printf("   PIB: %.2f bilhões de reais\n", pib1);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("   Densidade Populacional: %.2f hab/km²\n", densidade_popul1);
    printf("   PIB per Capita: %.2f reais\n", pib_percapita1);
    
    printf("\n");
    
    // Exibição completa da Carta 2
    printf("🃏 Carta 2:\n");
    printf("   Estado: %s\n", estado2);
    printf("   Código: %s\n", codigo2);
    printf("   Cidade: %s\n", cidade2);
    printf("   População: %d habitantes\n", populacao2);
    printf("   Área: %.2f km²\n", area2);
    printf("   PIB: %.2f bilhões de reais\n", pib2);
    printf("   Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("   Densidade Populacional: %.2f hab/km²\n", densidade_popul2);
    printf("   PIB per Capita: %.2f reais\n", pib_percapita2);
    
    printf("\n");
    
    /* 
     * SEÇÃO 5: COMPARAÇÃO DAS CARTAS
     * 
     * ATRIBUTO ESCOLHIDO PARA COMPARAÇÃO: POPULAÇÃO
     * 
     * Neste nível novato, comparamos apenas um atributo específico.
     * A escolha foi feita diretamente no código conforme especificação.
     * Para população: maior valor vence (mais habitantes = cidade maior).
     */
    printf("⚔️ === COMPARAÇÃO DE CARTAS === ⚔️\n\n");
    printf("Atributo escolhido para comparação: POPULAÇÃO 👥\n\n");
    
    // Exibição dos valores que serão comparados
    printf("Comparação de cartas (Atributo: População):\n");
    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, estado2, populacao2);
    
    printf("\n");
    
    /* 
     * LÓGICA DE COMPARAÇÃO USANDO ESTRUTURAS DE DECISÃO
     * 
     * Utilizamos if-else para determinar qual carta possui
     * maior população e, consequentemente, qual é a vencedora.
     */
    
    // Comparação usando if-else
    if (populacao1 > populacao2) {
        // Carta 1 tem maior população, logo é a vencedora
        printf("🏆 Resultado: Carta 1 (%s) venceu!\n", cidade1);
        printf("💪 %s possui %d habitantes a mais que %s.\n", 
               cidade1, (populacao1 - populacao2), cidade2);
    } 
    else if (populacao2 > populacao1) {
        // Carta 2 tem maior população, logo é a vencedora
        printf("🏆 Resultado: Carta 2 (%s) venceu!\n", cidade2);
        printf("💪 %s possui %d habitantes a mais que %s.\n", 
               cidade2, (populacao2 - populacao1), cidade1);
    } 
    else {
        // Populações são iguais - situação de empate
        printf("🤝 Resultado: Empate!\n");
        printf("✨ Ambas as cidades possuem exatamente %d habitantes.\n", populacao1);
    }
    
    /* 
     * SEÇÃO 6: INFORMAÇÕES ADICIONAIS DA COMPARAÇÃO
     * 
     * Fornecemos informações estatísticas adicionais sobre
     * a diferença entre as cartas para enriquecer a experiência.
     */
    printf("\n📊 === DETALHES DA COMPARAÇÃO === 📊\n");
    
    // Cálculo da diferença percentual entre as populações
    float diferenca_percentual;
    if (populacao1 > populacao2) {
        diferenca_percentual = ((float)(populacao1 - populacao2) / (float)populacao2) * 100.0f;
        printf("📈 %s tem %.2f%% mais habitantes que %s.\n", 
               cidade1, diferenca_percentual, cidade2);
    } else if (populacao2 > populacao1) {
        diferenca_percentual = ((float)(populacao2 - populacao1) / (float)populacao1) * 100.0f;
        printf("📈 %s tem %.2f%% mais habitantes que %s.\n", 
               cidade2, diferenca_percentual, cidade1);
    } else {
        printf("📊 As populações são idênticas - diferença de 0%.\n");
    }
    
    // Soma total das duas populações
    int populacao_total = populacao1 + populacao2;
    printf("🌍 População total das duas cidades: %d habitantes\n", populacao_total);
    
    /* 
     * SEÇÃO 7: MENSAGEM DE FINALIZAÇÃO
     * 
     * Confirmamos que a comparação foi realizada com sucesso
     * e incentivamos o usuário a experimentar com outras cartas.
     */
    printf("\n🎯 === COMPARAÇÃO CONCLUÍDA === 🎯\n");
    printf("✅ A batalha entre as cartas foi finalizada com sucesso!\n");
    printf("🔄 Experimente cadastrar outras cidades para novas comparações!\n");
    
    /* 
     * RETORNO DA FUNÇÃO MAIN
     * 
     * Retornamos 0 para indicar que o programa foi executado
     * sem erros e concluído com sucesso.
     */
    return 0;
}