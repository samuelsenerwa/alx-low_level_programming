#include "main.h"
/**
 * _isslower - Entry point
 * Description: checks is a character is lowercase
 * it recievers an integer value
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int i = 'a';

for (i = 'a'; i <= 'z'; i++)
{
/*reference to int c*/
if (c ==i)
{
return (1);
}
}
return (0);
}
