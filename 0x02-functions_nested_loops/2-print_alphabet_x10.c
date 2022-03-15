#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets in lower case followed by a line 10 times
 * return: return 0 if successful
 */

void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	while (i < 10) 
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
	i++;
}
