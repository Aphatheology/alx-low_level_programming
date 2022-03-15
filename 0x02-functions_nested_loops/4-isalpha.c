#include "main.h"

/**
 * _isaplha - checks if it is an alphabet
 * @c: The character (parameter) to be checked
 * Return: returns 1 if c is letter, uppercase or lowercase, returns 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
