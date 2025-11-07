#include <stdio.h>
#include <string.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of command line arguments
 * @argv: array containing the program command line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *name = strrchr(argv[0], '/');

	if (name)
		printf("%s\n", name + 1);
	else
		printf("%s\n", argv[0]);

	return (0);
}