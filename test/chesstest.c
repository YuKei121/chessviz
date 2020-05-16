#include "chesstest.h"
#include "Board.h"
#include "ctest.h"

char board [8][8];

CTEST(syntax, player_one)
{
	int expected = 0;
	int result = player('n');
	ASSERT_EQUAL(expected, result);
}

CTEST(syntax, player_two)
{
        int expected = 1;
        int result = player('N');
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, no_player)
{
        int expected = 2;
        int result = player(' ');
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_1)
{
        int expected = 0;
        int result = print_type("e2-e4");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_2)
{
        int expected = 1;
        int result = print_type("pe2-e4");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_1_and_mate)
{
        int expected = 0;
        int result = print_type("e2-e4#");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_2_and_mate)
{
        int expected = 1;
        int result = print_type("pe2-e4#");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_1_correct)
{
        int expected = 0;
        int result = check_writing("e2-e4");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_1_incorrect)
{
        int expected = -1;
        int result = check_writing("2e-e4");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_2_correct)
{
        int expected = 0;
        int result = check_writing("pe2-e4");
        ASSERT_EQUAL(expected, result);
}

CTEST(syntax, print_type_2_incorrect)
{
        int expected = -1;
        int result = check_writing("z2e-e4");
        ASSERT_EQUAL(expected, result);
}
