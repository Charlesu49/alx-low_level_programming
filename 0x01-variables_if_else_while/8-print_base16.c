#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16 in lowercase
 * Return: return 0 if successful
 */

int main(void)
{
	int i;
	char ch;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
