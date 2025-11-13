# Batalha Naval em C - Nível Novato

## Objetivo
Primeira etapa do projeto Batalha Naval, desenvolvida em linguagem C.  
O objetivo é representar um tabuleiro 10x10 e posicionar dois navios de forma fixa, um na horizontal e outro na vertical.

## Funcionalidades
- Tabuleiro representado por uma matriz 10x10
- Dois navios de tamanho 3
- Posicionamento fixo (sem sobreposição)
- Exibição clara do tabuleiro no console

| Parte                               | Descrição                                                         |
| ----------------------------------- | ----------------------------------------------------------------- |
| `tabuleiro[10][10]`                 | Matriz que representa o campo de batalha (tudo começa com 0).     |
| `navioHorizontal` e `navioVertical` | Arrays que armazenam as partes do navio (3 posições).             |
| Loops `for`                         | Usados para preencher as posições dos navios dentro do tabuleiro. |
| Impressão com `printf`              | Exibe todo o tabuleiro de forma organizada.                       |

## Estrutura do Projeto
batalha-naval/
│
├── batalha_naval.c
└── README.md

## Execução
Compile e execute o programa com:
```bash
gcc batalha_naval.c -o batalha_naval
./batalha_naval
```
Saída Esperada
=== TABULEIRO DE BATALHA NAVAL ===

0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 3 3 3 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 3 0 0
0 0 0 0 0 0 0 3 0 0
0 0 0 0 0 0 0 3 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

# Batalha Naval em C - Nível Aventureiro

## Objetivo
Segunda etapa do projeto Batalha Naval, agora com navios em posições diagonais.

## Funcionalidades
- Tabuleiro 10x10 representado por uma matriz bidimensional
- 4 navios de tamanho 3:
  - 2 horizontais/verticais
  - 2 diagonais (↘ e ↙)
- Validação de limites e não sobreposição
- Exibição organizada no console

## Explicação do Código
| Seção                 | Função                                                      |
| --------------------- | ----------------------------------------------------------- |
| `tabuleiro[10][10]`   | Cria a matriz 10x10 (representa o oceano).                  |
| `navio1` a `navio4`   | Cada vetor representa um navio com 3 partes.                |
| **Laços `for`**       | Repetem o processo de posicionar cada parte do navio.       |
| **Coordenadas fixas** | Garantem que os navios não saiam do limite.                 |
| **Diagonal ↘**        | Aumenta linha e coluna simultaneamente (`tabuleiro[i][i]`). |
| **Diagonal ↙**        | Aumenta linha e diminui coluna (`tabuleiro[i][9-i]`).       |


## Estrutura do Projeto

Legenda: 0 = Água | 3 = Navio

batalha-naval/
│
├── batalha_naval_aventureiro.c
└── README.md


## Execução
Compile e execute com:
```bash
gcc batalha_naval_aventureiro.c -o batalha_naval_aventureiro
./batalha_naval_aventureiro
```
Saída Esperada (Exemplo)
=== TABULEIRO DE BATALHA NAVAL - NÍVEL AVENTUREIRO ===

3 0 0 0 0 0 0 0 0 0
0 3 3 3 0 0 0 0 0 0
0 0 3 0 0 0 0 0 0 3
0 0 0 0 0 0 0 0 3 0
0 0 0 0 0 0 0 3 0 0
0 0 0 0 0 0 3 0 0 0
0 0 0 0 0 0 3 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0
0 0 0 0 0 0 0 0 0 0

Legenda: 0 = Água | 3 = Navio

# Batalha Naval em C - Nível Mestre

## Objetivo
Desafio final do projeto Batalha Naval. Agora, o programa exibe áreas de efeito (AoE) de habilidades especiais sobre o tabuleiro.

## Funcionalidades
- Tabuleiro 10x10 com navios fixos
- 3 habilidades especiais:
  - **Cone** (formato triangular)
  - **Cruz** (formato +)
  - **Octaedro** (formato losango)
- Sobreposição dinâmica das áreas de efeito com valor `5`
- Exibição organizada no console

##Explicação do Código
| Seção                      | Descrição                                                                                                 |
| -------------------------- | --------------------------------------------------------------------------------------------------------- |
| `cone`, `cruz`, `octaedro` | Matrizes 5x5 que representam o formato das habilidades.                                                   |
| **CONE**                   | Cria uma pirâmide invertida (formato triangular).                                                         |
| **CRUZ**                   | Marca a linha e coluna centrais da matriz.                                                                |
| **OCTAEDRO**               | Usa a distância de Manhattan para formar um losango.                                                      |
| **Sobreposição**           | Centraliza cada matriz no ponto definido do tabuleiro e aplica `5` onde há `1` (sem sobrescrever navios). |
| **Condicionais**           | Garantem que o efeito não saia dos limites 10x10.                                                         |

## Estrutura do Projeto
batalha-naval/
│
├── batalha_naval_mestre.c
└── README.md


## Execução
```bash
gcc batalha_naval_mestre.c -o batalha_naval_mestre
./batalha_naval_mestre
```
## Exemplo de Saída
=== TABULEIRO DE BATALHA NAVAL - NIVEL MESTRE ===

5 5 3 3 3 5 5 0 0 0
0 5 5 5 5 5 5 0 0 0
0 0 3 0 0 0 0 5 0 0
0 0 0 5 5 5 5 5 0 0
0 0 0 5 3 5 5 5 0 0
0 0 0 5 5 5 5 5 0 0
0 0 5 5 5 3 5 5 0 0
0 0 0 5 5 3 5 0 0 0
0 0 0 0 5 3 5 0 0 0
0 0 0 0 5 5 0 0 0 0

Legenda: 0 = Água | 3 = Navio | 5 = Área de Habilidade



