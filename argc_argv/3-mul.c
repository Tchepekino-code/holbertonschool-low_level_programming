#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int prd = 0;
int a, b;

if (argc == 3)
{
a = atoi(argv[1]);
b = atoi(argv[2]);
prd = (a * b);

printf("%d\n", prd);
}

else
{
	 printf("Error");
}

return (0);
}
