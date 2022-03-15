#include "main.h"
#include <unistd.h>
#include "_putchar.c"

/**
 * main - prints _putchar, followed by a new line
 * Return: returns 0 if successful
 */

int main(void)
{
	print_alphabet_x10();
}


/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 *       */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i;

	while (i < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n')
		i++;
}
