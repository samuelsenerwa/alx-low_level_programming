#include "main.h"

/**
 * set_strng - sets the value of a pointer to a char
 * @s: pointer to pointer we need to set
 * @to: string not set
 */
void set_string(char **s, char *to)
{
	*s = to;
}
