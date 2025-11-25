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

    int linha_navio = 1; // (índice 1 = linha 2)

    tabuleiro[linha_navio][5] = 3;
    tabuleiro[linha_navio][6] = 3;  
    tabuleiro[linha_navio][7] = 3;
    
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

        for (int j = 0; j < 10; j++) {
            // Substituir o valor na casa c3 (linha 3, coluna C) se for zero
        if (tabuleiro[2][2] == 0) {
            tabuleiro[2][2] = 5;
            tabuleiro[2][3] = 5;
            tabuleiro[2][1] = 5;
            tabuleiro[1][2] = 5;
            tabuleiro[3][2] = 5;

            // Substituir o valor na casa g5 (linha 5, coluna G) se for zero
        } else if (tabuleiro[4][6] == 0) {
            tabuleiro[4][6] = 5;
            tabuleiro[4][7] = 5;
            tabuleiro[4][8] = 5;
            tabuleiro[4][5] = 5;
            tabuleiro[4][4] = 5;
            tabuleiro[3][6] = 5;
            tabuleiro[5][6] = 5;

            // Substituir o valor na casa e7 (linha 7, coluna E) se for zero
        } else if (tabuleiro[6][3] == 0) {
            tabuleiro[6][3] = 5;
            tabuleiro[7][3] = 5;
            tabuleiro[7][2] = 5;
            tabuleiro[7][4] = 5;
            tabuleiro[8][1] = 5;
            tabuleiro[8][2] = 5;
            tabuleiro[8][3] = 5;
            tabuleiro[8][4] = 5;
            tabuleiro[8][5] = 5;

        }  

        
            printf("%d ", tabuleiro[i][j]);
        }

        printf("\n");
    }    

    return 0;
}
