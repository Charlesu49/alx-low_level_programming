#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets in lower case
 * Return: returns 0 if successful
 */

void print_alphabet_x10(void)
{
char letter;
int i = 0;

while (i < 10)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
i++;
}

}
