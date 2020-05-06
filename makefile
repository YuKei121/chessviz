all:
	gcc -Wall -Werror -c BoardPrintPlain.c
	gcc -Wall -Werror -c Board.c
	gcc -Wall -Werror -c main.c
	gcc main.o Board.o BoardPrintPlain.o -o test
clean:
	rm -rf *.o
