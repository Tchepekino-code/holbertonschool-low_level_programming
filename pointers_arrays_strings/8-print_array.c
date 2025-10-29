#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: the number of elements of the array to be printed
 *
 */
void print_array(int *a, int n)
{
  for (i = 0; i < (n - 1); n += 1)
    {
    printf("#d", array[i]);
    if (i < (n - 1))
      printf(", ");
    }
  _putchar('\n');
}
