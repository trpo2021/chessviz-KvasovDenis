#include <stdio.h>
int main()
{
    char board[10][10]
            = {" ABCDEFGH",
               "8rnbqkbnr",
               "7pppppppp",
               "6        ",
               "5        ",
               "4        ",
               "3        ",
               "2PPPPPPPP",
               "1RNBQKBNR"};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", board[i][j]);
            printf("%s", "   ");
        }
        printf("%s", "\n");
    }
    return 0;
}