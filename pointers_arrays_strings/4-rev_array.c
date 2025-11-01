#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array
 * @n: number of elements of the array
 *
 */
void reverse_array(int *a, int n)
{

  int tmp;
  int i = 0;
  if (n > 0)
    {
  while(i != (n - 1))
    {
      tmp = a[i];
     a[i] = a[n - 1];
     a[n - 1] = tmp;
     i++;
     n--;
    }
    }
  else
    return;
  

}
