#include "main.h"

/**
 * _isalpha - function that checks for an alphabet
 * @c: this is the variable parameter
 * Return: returns 1 if alphabet and 0 if non alphabet
 */

int _isalpha(int c)
{
if (c >= 'a' && c <= 'z' )
{
return (1);
}
else if (C >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
