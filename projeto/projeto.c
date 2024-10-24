#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 9

void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            if (j % 3 == 0 && j != 0)
                printf("| ");
            printf("%d ", tabuleiro[i][j]);
        }
        if ((i + 1) % 3 == 0 && i != 8)
            printf("\n---------------------");
        printf("\n");
    }
}

int valido(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int numero) {
    // Verifica a linha
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[linha][i] == numero)
            return 0;
    }
    // Verifica a coluna
    for (int i = 0; i < TAMANHO; i++) {
        if (tabuleiro[i][coluna] == numero)
            return 0;
    }
    // Verifica a subgrade 3x3
    int inicioLinha = linha - linha % 3;
    int inicioColuna = coluna - coluna % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (tabuleiro[i + inicioLinha][j + inicioColuna] == numero)
                return 0;
        }
    }
    return 1;
}

int resolver(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int linha = 0; linha < TAMANHO; linha++) {
        for (int coluna = 0; coluna < TAMANHO; coluna++) {
            if (tabuleiro[linha][coluna] == 0) {
                for (int numero = 1; numero <= 9; numero++) {
                    if (valido(tabuleiro, linha, coluna, numero)) {
                        tabuleiro[linha][coluna] = numero;
                        if (resolver(tabuleiro))
                            return 1;
                        tabuleiro[linha][coluna] = 0;
                    }
                }
                return 0;
            }
        }
    }
    return 1;
}

void inicializarSudoku(int tabuleiro[TAMANHO][TAMANHO], int dificuldade) {
    // Sudoku fácil: mais números preenchidos
    int facil[TAMANHO][TAMANHO] = {
        {5, 3, 0, 0, 7, 0, 0, 0, 0},
        {6, 0, 0, 1, 9, 5, 0, 0, 0},
        {0, 9, 8, 0, 0, 0, 0, 6, 0},
        {8, 0, 0, 0, 6, 0, 0, 0, 3},
        {4, 0, 0, 8, 0, 3, 0, 0, 1},
        {7, 0, 0, 0, 2, 0, 0, 0, 6},
        {0, 6, 0, 0, 0, 0, 2, 8, 0},
        {0, 0, 0, 4, 1, 9, 0, 0, 5},
        {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };

    // Sudoku difícil: menos números preenchidos
    int dificil[TAMANHO][TAMANHO] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 3, 0, 8, 5},
        {0, 0, 1, 0, 2, 0, 0, 0, 0},
        {0, 0, 0, 5, 0, 7, 0, 0, 0},
        {0, 0, 4, 0, 0, 0, 1, 0, 0},
        {0, 9, 0, 0, 0, 0, 0, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 7, 3},
        {0, 0, 2, 0, 1, 0, 0, 0, 0},
        {0, 0, 0, 0, 4, 0, 0, 0, 9}
    };

    // Copia o tabuleiro conforme a dificuldade escolhida
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = (dificuldade == 1) ? facil[i][j] : dificil[i][j];
        }
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];
    int dificuldade;

    printf("Escolha a dificuldade (1 - Fácil, 2 - Difícil): ");
    scanf("%d", &dificuldade);

    inicializarSudoku(tabuleiro, dificuldade);

    printf("\nTabuleiro inicial:\n");
    exibirTabuleiro(tabuleiro);

    if (resolver(tabuleiro)) {
        printf("\nSolução:\n");
        exibirTabuleiro(tabuleiro);
    } else {
        printf("Não foi possível resolver o Sudoku.\n");
    }

    return 0;
}




