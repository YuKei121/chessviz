#include "Board.h"
#include "BoardPrintPlain.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("clear");
    char board[8][8] = {{"rnbqkbnr"},
                        {"pppppppp"},
                        {"        "},
                        {"        "},
                        {"        "},
                        {"        "},
                        {"PPPPPPPP"},
                        {"RNBQKBNR"}};
    int ShowMustGoOn;
    do {
    board_print(board);
    ShowMustGoOn = move(board);
    } while (ShowMustGoOn != 1);
    board_print(board);
    printf("Игра окончена!\n");
    return 0;
}
