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

Legenda: 0 = Água | 3 = Navio



