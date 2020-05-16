all:
	gcc -c -Wall -Werror -o build/src/Board.o src/Board.c
	gcc -c -Wall -Werror -o build/src/BoardPrintPlain.o src/BoardPrintPlain.c
	gcc -c -Wall -Werror -o build/src/main.o src/main.c
	gcc -o bin/chess build/src/Board.o build/src/BoardPrintPlain.o build/src/main.o
	gcc -c -Wall -Werror -o build/test/Board.o src/Board.c
	gcc -c -Wall -Werror -o build/test/BoardPrintPlain.o src/BoardPrintPlain.c
	gcc -c -Wall -Werror -o build/test/main.o test/main.c -I thirdparty -I src
	gcc -c -Wall -Werror -o build/test/chesstest.o test/chesstest.c -I thirdparty -I src
	gcc -o bin/chesstest build/test/Board.o build/test/BoardPrintPlain.o build/test/main.o build/test/chesstest.o
clean:
	rm -rf build/src/*.o build/test/*.o
