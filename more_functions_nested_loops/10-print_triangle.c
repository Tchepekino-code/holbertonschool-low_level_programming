#include "main.h"

/**
 * print_triangle -prints a triangle, followed by a new line.
 * @size: is the size of the triangle
 */
void print_triangle(int size)
{
  int n;
  int m;
  
  if (size > 0){
    for (n = (size - 1) ; n >= 0; n--){
      _putchar(' ');
   
    for (m = 0; m <= size; m++)
      _putchar('#');
    }
    _putchar('\n');


    
  }
  else
    _putchar('\n');
}
