#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void move(char board[8][8])
{
	char c[6];
	char figure;
	fgets(c, 6, stdin);
	int x, y;
	for (int i = 0; i < strlen(c); i++)
	{
		if (c[2] != '-')
		{
			printf("Incorrect input!\n");
			break;
		}
		if (c[i] != '-')
		{
			switch(c[i])
			{
				case 'a': x=0; break;
				case 'b': x=1; break;
				case 'c': x=2; break;
				case 'd': x=3; break;
                                case 'e': x=4; break;
                                case 'f': x=5; break;
				case 'g': x=6; break;
				case 'h': x=7; break;
				case '1': y=0; break;
                                case '2': y=1; break;
                                case '3': y=2; break;
                                case '4': y=3; break;
                                case '5': y=4; break;
                                case '6': y=5; break;
                                case '7': y=6; break;
                                case '8': y=7; break;
				default: printf("Incorrect input!\n");
			}
		}
			else
		{
				figure = board[y][x];
				board[y][x] = ' ';
		}
		
	}
	board[y][x] = figure;
}

