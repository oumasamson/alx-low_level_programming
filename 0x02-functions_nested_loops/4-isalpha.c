#include "main.h"
/**
 * isalpha -checks for alphabetic character
 * @c: the function to be checked
 * Return: 1 if c is a letter, lowercase or uppercase and 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
