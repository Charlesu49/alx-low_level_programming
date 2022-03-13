#include <stdio.h>

/**
 * main - this program prints the alphabets is lower case
 * Return: returns 0 if successful
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
