#include "main.h"

/**
 * _isaplha - checks if it is an alphabet
 * take a character as argument
 * Return 1 if successful and 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
