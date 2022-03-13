#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet in reverse
 * Return: is successful return 0
 */

int main(void)
{
	char ch;

	for (ch = 122; ch >= 97; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
