#include <stdio.h>

int main()
{
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    printf("\n[ Tabuleiro Batalha Naval - Nível Aventureiro ]\n\n");

    // Inicializando o tabuleiro com 0 (água)
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tabuleiro[i][j] = 0;
        }
    }

    // ======= COLOCANDO OS NAVIOS EM LINHA =======
    int linha_horizontal = 1; // (índice 1 = linha 2)
    int linha_vertical = 4;   // (índice 3 = linha 4)
    int linha1_diagonal = 6;  // (índice 6 = linha 7)
    int linha2_diagonal = 8;  // (índice 8 = linha 9)

    // Navio HORIZONTAL (3 posições)
    tabuleiro[linha_horizontal][1] = 3;
    tabuleiro[linha_horizontal][2] = 3;
    tabuleiro[linha_horizontal][3] = 3;

    // Navio HORIZONTAL (3 posições)
    tabuleiro[linha_vertical - 1][1] = 3;
    tabuleiro[linha_vertical][1] = 3;
    tabuleiro[linha_vertical + 1][1] = 3;

    // Navio 1 Diagonal (3 posições)
    tabuleiro[linha1_diagonal][6] = 3;
    tabuleiro[linha1_diagonal - 1][7] = 3;
    tabuleiro[linha1_diagonal - 2][8] = 3;

    // Navio 2 Diagonal (3 posições)
    tabuleiro[linha2_diagonal][5] = 3;
    tabuleiro[linha2_diagonal - 1][4] = 3;
    tabuleiro[linha2_diagonal - 2][3] = 3;

    // Cabeçalho com as colunas
    printf("   ");
    for (int k = 0; k < 10; k++)
    {
        printf("%c ", linha[k]);
    }
    printf("\n");

    // Exibir tabuleiro com números das linhas
    for (int i = 0; i < 10; i++)
    {
        printf("%2d ", i + 1);

        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
