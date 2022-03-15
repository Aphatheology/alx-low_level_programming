#include "main.h"

/**
 * _isalpha - checks if it is an alphabet
 * @c: The character (parameter) to be checked
 * Return: 1 if c is letter, returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
