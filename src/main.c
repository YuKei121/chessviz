#include "Board.h"
#include "BoardPrintPlain.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char board[8][8] = {{"rnbqkbnr"},
                        {"pppppppp"},
                        {"        "},
                        {"        "},
                        {"        "},
                        {"        "},
                        {"PPPPPPPP"},
                        {"RNBQKBNR"}};
    board_print(board);
    int ShowMustGoOn;
    do {
    ShowMustGoOn = move(board);
    board_print(board);
    } while (ShowMustGoOn != 1);
    return 0;
}
