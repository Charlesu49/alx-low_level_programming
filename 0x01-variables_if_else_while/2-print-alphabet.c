#include <stdio.h>

/**
 * main - this program prints the alphabets is lower case
 * Return: returns 0 if successful
 */

int main(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	return(0);
}
