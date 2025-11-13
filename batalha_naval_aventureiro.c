#include <stdio.h>

/*
  =====================================
  DESAFIO BATALHA NAVAL - NÍVEL AVENTUREIRO
  =====================================
  Objetivo:
  - Criar um tabuleiro 10x10 (água = 0)
  - Posicionar 4 navios de tamanho 3:
      * 2 navios na horizontal/vertical
      * 2 navios na diagonal
  - Exibir o tabuleiro no console
*/

int main() {
    // -------------------------------
    // Declaração do tabuleiro 10x10
    // -------------------------------
    int tabuleiro[10][10] = {0};

    // -------------------------------
    // Navios (tamanho fixo = 3)
    // -------------------------------
    int navio1[3] = {3, 3, 3}; // Horizontal
    int navio2[3] = {3, 3, 3}; // Vertical
    int navio3[3] = {3, 3, 3}; // Diagonal ↘ (principal)
    int navio4[3] = {3, 3, 3}; // Diagonal ↙ (secundária)

    // -------------------------------
    // Coordenadas iniciais (pré-definidas e válidas)
    // -------------------------------
    int linhaH = 1, colunaH = 2; // Navio horizontal
    int linhaV = 5, colunaV = 6; // Navio vertical
    int linhaD1 = 0, colunaD1 = 0; // Diagonal ↘
    int linhaD2 = 2, colunaD2 = 9; // Diagonal ↙

    // -------------------------------
    // Posiciona o navio horizontal
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navio1[i];
    }

    // -------------------------------
    // Posiciona o navio vertical
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navio2[i];
    }

    // -------------------------------
    // Posiciona o navio diagonal ↘ (linha e coluna +1)
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD1 + i][colunaD1 + i] = navio3[i];
    }

    // -------------------------------
    // Posiciona o navio diagonal ↙ (linha +1, coluna -1)
    // -------------------------------
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaD2 + i][colunaD2 - i] = navio4[i];
    }

    // -------------------------------
    // Exibe o tabuleiro no console
    // -------------------------------
    printf("=== TABULEIRO DE BATALHA NAVAL - NÍVEL AVENTUREIRO ===\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = Água | 3 = Navio\n");

    return 0;
}
