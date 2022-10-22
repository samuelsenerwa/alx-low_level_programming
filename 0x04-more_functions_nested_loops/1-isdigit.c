#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks if the character is a digit
 * @c: it is the variable
 * Return: 1 if true, 0 if false
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
