#include "BoardPrintPlain.h"
#include "Board.h"
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char board[8][8]={{"rnbqkbnr"},{"pppppppp"},{"        "},{"        "},{"        "},{"        "},{"PPPPPPPP"},{"RNBQKBNR"}};
	board_print(board);
	board_read(board);
	board_print(board);
	return 0;
}
