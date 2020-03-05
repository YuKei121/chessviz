all: chess
	gcc -g -Wall -o chess chess.c

clean:
	$(RM) chess
