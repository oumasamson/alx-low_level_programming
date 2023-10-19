#include "main.h"
/**
 * _islower - checks for lowercase character.
 * @c: the function to be checked
 * Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
