#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to the pointer to be set
 * @to: pointer to the string to assign
 *
 * Description: This function makes *s point to the string `to`.
 */
void set_string(char **s, char *to)
{
*s = to; 
}
