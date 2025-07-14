#include <stdio.h>

int main() {
    // Desafio xadrez iniciante
    int casas_torre = 5;        // Torre move 5 casas para a direita
    int casas_bispo = 5;        // Bispo move 5 casas na diagonal (cima-direita)
    int casas_rainha = 8;       // Rainha move 8 casas para a esquerda
    
    int contador;               // Variável auxiliar para controle das estruturas
    
    // ========== MOVIMENTO DA TORRE ==========
    // Utilizando estrutura FOR
    // A Torre move-se horizontalmente ou verticalmente
    // Simulando movimento de 5 casas para a direita
    
    printf("=== MOVIMENTO DA TORRE ===\n");
    printf("Movendo Torre 5 casas para a direita:\n");
    
    for (contador = 1; contador <= casas_torre; contador++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separação
    
    // ========== MOVIMENTO DO BISPO ==========
    // Utilizando estrutura WHILE
    // O Bispo move-se na diagonal
    // Simulando movimento de 5 casas na diagonal (cima-direita)
    
    printf("=== MOVIMENTO DO BISPO ===\n");
    printf("Movendo Bispo 5 casas na diagonal (cima-direita):\n");
    
    contador = 1; // Inicialização da variável de controle
    while (contador <= casas_bispo) {
        printf("Cima Direita\n");
        contador++; // Incremento da variável de controle
    }
    
    printf("\n"); // Linha em branco para separação
    
    // ========== MOVIMENTO DA RAINHA ==========
    // Utilizando estrutura DO-WHILE
    // A Rainha move-se em todas as direções
    // Simulando movimento de 8 casas para a esquerda
    
    printf("=== MOVIMENTO DA RAINHA ===\n");
    printf("Movendo Rainha 8 casas para a esquerda:\n");
    
    contador = 1; // Inicialização da variável de controle
    do {
        printf("Esquerda\n");
        contador++; // Incremento da variável de controle
    } while (contador <= casas_rainha);
    
    printf("\n"); // Linha em branco para finalização
    printf("Simulacao de movimentos concluida!\n");
    
    return 0;

}