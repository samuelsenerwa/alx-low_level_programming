#incude <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: on usccess 1
 * On errror, -1 returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
