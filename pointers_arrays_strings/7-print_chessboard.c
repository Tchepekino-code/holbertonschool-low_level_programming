#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: pointer to an array of 8 characters
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
    int i;
    int j;

    for (i = 0; i <= 7; i++)
    {
        for (j = 0; j <= 7; j++)
        {
            _puchar(a[i][j]);
        }
        _putchar('\n');
    }
}