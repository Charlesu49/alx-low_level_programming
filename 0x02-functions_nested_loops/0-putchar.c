#include "main.h"

/**
 * main - prints _putchar, followed by a new line
 * Return: returns 0 if successful
 */

int main(void)
{
	char text[9] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');

	return (0);
}
