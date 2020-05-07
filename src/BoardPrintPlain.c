#include <stdio.h>
#include <stdlib.h>

char board[8][8] = {{"rnbqkbnr"},
                    {"pppppppp"},
                    {"        "},
                    {"        "},
                    {"        "},
                    {"        "},
                    {"PPPPPPPP"},
                    {"RNBQKBNR"}};

void board_print(char board[8][8])
{
    printf("  a b c d e f g h\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", i + 1);
        for (int j = 0; j < 8; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}
