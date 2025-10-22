#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char a;
for (a = 48 ; a <= 102 ; a++)
{
if (a > 57 && a < 97)
continue;
putchar(a);
}
putchar('\n');
return (0);
}
