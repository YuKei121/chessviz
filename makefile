all:
	gcc -Wall -Werror -o build/BoardPrintPlain.o -c src/BoardPrintPlain.c -lm
	gcc -Wall -Werror -o build/Board.o -c src/Board.c -lm
	gcc -Wall -Werror -o build/main.o -c src/main.c -lm
	gcc build/main.o build/Board.o build/BoardPrintPlain.o -o bin/test -lm
clean:
	rm -rf build/*.o bin/test
