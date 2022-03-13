#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: returns 0 if correct
 */

int main(void)
{
	/* declarations for the digits*/
	int i;
	int j;

	i = 48;
	j = 48;

	while (j < 58)
	{
		i = 48;
		while (i < 58)
			{
				if (j != i && j < i)
				{
					putchar(j);
					putchar(i);
					if (i == 57 && j == 56)
					{
						break;
					}
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			j++;
		
		putchar('\n');
		return (0);
	}
}

