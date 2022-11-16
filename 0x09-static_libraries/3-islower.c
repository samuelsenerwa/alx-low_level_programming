#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: it recieves values
 * Return: 1 if true 0 if is  false
 */

int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/*reference to int c*/
if (c == i)
{
return (1);
}
}
return (0);
}
