#include <stdio.h>

int main()
{
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int tabuleiro[10][10];

    printf("\n[ Tabuleiro Batalha Naval - Nível Novato ]\n\n");

    // Inicializando o tabuleiro com 0 (água)
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // ======= COLOCANDO OS NAVIOS EM LINHA =======
    int linha_navios = 4;  // (índice 4 = linha 5)

    // Navio HORIZONTAL (3 posições)
    tabuleiro[linha_navios][1] = 3;
    tabuleiro[linha_navios][2] = 3;
    tabuleiro[linha_navios][3] = 3;

    // Navio VERTICAL (3 posições)
    tabuleiro[linha_navios - 1][6] = 3;
    tabuleiro[linha_navios][6]     = 3;
    tabuleiro[linha_navios + 1][6] = 3;

    // Cabeçalho com as colunas
    printf("   ");
    for(int k = 0; k < 10; k++) {
        printf("%c ", linha[k]);
    }
    printf("\n");

    // Exibir tabuleiro com números das linhas
    for(int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);

        for(int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }

    return 0;
}
