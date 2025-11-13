#include <stdio.h>

/*
  ============================================
  DESAFIO BATALHA NAVAL - NÍVEL MESTRE
  ============================================
  Objetivo:
  - Representar habilidades especiais no tabuleiro:
      * Cone
      * Cruz
      * Octaedro (losango)
  - Cada habilidade possui sua própria matriz de área de efeito (1 = afetado, 0 = não afetado)
  - As áreas são sobrepostas ao tabuleiro 10x10 com valor 5 representando a área afetada.
*/

#define TAM 10
#define HABILIDADE 5

int main() {
    // -------------------------------
    // Declaração do tabuleiro 10x10
    // -------------------------------
    int tabuleiro[TAM][TAM] = {0};

    // -------------------------------
    // Posicionamento de navios (valor = 3)
    // -------------------------------
    tabuleiro[2][2] = 3;
    tabuleiro[2][3] = 3;
    tabuleiro[2][4] = 3;
    tabuleiro[6][6] = 3;
    tabuleiro[7][6] = 3;
    tabuleiro[8][6] = 3;

    // -------------------------------
    // Matrizes das habilidades (5x5)
    // -------------------------------
    int cone[HABILIDADE][HABILIDADE];
    int cruz[HABILIDADE][HABILIDADE];
    int octaedro[HABILIDADE][HABILIDADE];

    // -------------------------------
    // Construção da habilidade CONE
    // (Triângulo apontando para baixo)
    // -------------------------------
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (j >= (HABILIDADE / 2) - i && j <= (HABILIDADE / 2) + i)
                cone[i][j] = 1;
            else
                cone[i][j] = 0;
        }
    }

    // -------------------------------
    // Construção da habilidade CRUZ
    // -------------------------------
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (i == HABILIDADE / 2 || j == HABILIDADE / 2)
                cruz[i][j] = 1;
            else
                cruz[i][j] = 0;
        }
    }

    // -------------------------------
    // Construção da habilidade OCTAEDRO (losango)
    // -------------------------------
    for (int i = 0; i < HABILIDADE; i++) {
        for (int j = 0; j < HABILIDADE; j++) {
            if (abs((HABILIDADE / 2) - i) + abs((HABILIDADE / 2) - j) <= HABILIDADE / 2)
                octaedro[i][j] = 1;
            else
                octaedro[i][j] = 0;
        }
    }

    // -------------------------------
    // Pontos de origem das habilidades no tabuleiro
    // -------------------------------
    int origemConeLinha = 0, origemConeColuna = 2;
    int origemCruzLinha = 4, origemCruzColuna = 5;
    int origemOctaLinha = 6, origemOctaColuna = 3;

    // -------------------------------
    // Função para sobrepor matriz de habilidade no tabuleiro
    // -------------------------------
    for (int habilidade = 0; habilidade < 3; habilidade++) {
        int (*matriz)[HABILIDADE];
        int origemLinha, origemColuna;

        // Escolhe qual matriz aplicar
        if (habilidade == 0) {
            matriz = cone;
            origemLinha = origemConeLinha;
            origemColuna = origemConeColuna;
        } else if (habilidade == 1) {
            matriz = cruz;
            origemLinha = origemCruzLinha;
            origemColuna = origemCruzColuna;
        } else {
            matriz = octaedro;
            origemLinha = origemOctaLinha;
            origemColuna = origemOctaColuna;
        }

        // Sobrepõe a área da habilidade no tabuleiro
        for (int i = 0; i < HABILIDADE; i++) {
            for (int j = 0; j < HABILIDADE; j++) {
                int linhaTab = origemLinha + i - HABILIDADE / 2;
                int colunaTab = origemColuna + j - HABILIDADE / 2;

                // Verifica se está dentro dos limites do tabuleiro
                if (linhaTab >= 0 && linhaTab < TAM && colunaTab >= 0 && colunaTab < TAM) {
                    if (matriz[i][j] == 1 && tabuleiro[linhaTab][colunaTab] == 0)
                        tabuleiro[linhaTab][colunaTab] = 5; // Marca área de efeito
                }
            }
        }
    }

    // -------------------------------
    // Exibe o tabuleiro final no console
    // -------------------------------
    printf("=== TABULEIRO DE BATALHA NAVAL - NIVEL MESTRE ===\n\n");

    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\nLegenda: 0 = Água | 3 = Navio | 5 = Área de Habilidade\n");

    return 0;
}
