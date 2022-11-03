#include "main.h"

/**
 * _print_rev_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return:length of the string
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
