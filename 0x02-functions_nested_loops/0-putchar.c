#include <stdio.h>
#include <string.h>
/**
 * main - Entry Point
 * Description: prints 'Alx\n'
 * Return: Always 0 (success)
 */
int main(void)
{
	char str[] = "Holberton\n";
	int i = 0;

	while (str[i] != '\0')
		{
			char c = str[i];

			putchar(c);
			i++;
		}
		return (0);
}
