#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, followed by a new line.
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	char letter;

	while (n <= 9) n++;
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
		_putchar('\n');
	}
}
