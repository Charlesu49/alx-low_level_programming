#include <stdio.h>

/**
 * main - program that prints all possible combinations of single-digit numbers
 * Return: if successful return 0
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		purchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
