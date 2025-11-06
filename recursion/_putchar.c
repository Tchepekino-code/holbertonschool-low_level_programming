#include "main.h"

int write(int fd, char *buf, int count);

int _putchar(char c)
{
    return write(1, &c, 1);
}
