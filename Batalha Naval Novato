#include <stdio.h>

/*
  =====================================
  DESAFIO BATALHA NAVAL - NÍVEL NOVATO
  =====================================
  Objetivo:
  - Criar um tabuleiro 10x10 (água = 0)
  - Posicionar 2 navios de tamanho 3 (valor = 3)
    - Um na horizontal
    - Outro na vertical
  - Exibir o tabuleiro completo no console
*/

int main() {
    // -------------------------------
    // Declaração e inicialização do tabuleiro 10x10
    // -------------------------------
    int tabuleiro[10][10] = {0}; // Inicializa tudo com 0 (água)

    // -------------------------------
    // Declaração dos navios (tamanho fixo 3)
    // -------------------------------
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};

    // -------------------------------
    // Definição das coordenadas iniciais (pré-definidas)
    // -------------------------------
    int linhaHorizontal = 2; // Linha onde o navio horizontal será colocado
    int colunaHorizontal = 4; // Coluna inicial do navio horizontal

    int linhaVertical = 5; // Linha inicial do navio vertical
    int colunaVertical = 7; // Coluna onde o navio vertical será colocado

    // -------------------------------
    // Posiciona o navio horizontal (3 casas para a direita)
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaHorizontal][colunaHorizontal + i] = navioHorizontal[i];
    }

    // -------------------------------
    // Posiciona o navio vertical (3 casas para baixo)
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaVertical + i][colunaVertical] = navioVertical[i];
    }

    // -------------------------------
    // Exibe o tabuleiro no console
    // -------------------------------
    printf("=== TABULEIRO DE BATALHA NAVAL ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]); // Exibe o valor da posição
        }
        printf("\n"); // Nova linha a cada linha do tabuleiro
    }

    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    return 0;
}
