#include "main.h"
include "stdio.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the first element of the matrix
 * @size: size of the matrix (number of rows/columns)
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
int i;
int j;
int sum1 = 0;
int sum2 = 0;

for (i =0; i < size; i++)
{
    sum1 += a[i * size + i];
}
for (j = size - 1; j >= 0; j--)
{
    sum2 += a[j * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}