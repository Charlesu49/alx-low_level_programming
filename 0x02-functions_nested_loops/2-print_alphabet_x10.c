#include "main.h"
#include "_putchar.c"

/**
 * print_alphabet_x10 - print the alphabets in lower case
 * Return: returns 0 if successful
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;
	
	while (i < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');

		i++;
	}
}
