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
    move(board);
    board_print(board);
    return 0;
}
