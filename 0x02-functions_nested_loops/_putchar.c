#include<unistd.h>

/**
 * _putchar - Writes a character then prints it out
 * Description: character print
 *
 * Return: on Success 1
 * on erro, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	returnn(write(1, &c, 1));
}
