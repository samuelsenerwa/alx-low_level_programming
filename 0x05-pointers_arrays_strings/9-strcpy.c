#include "main.h"

/**
 * strcpy - copies the string pointed to by src
 * @dest: char type string
 * @src: char type string
 * Description: copy the string pointed to by pointer `src to
 * the buffer pointed to by dest`
 * Return pointer `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len ++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
