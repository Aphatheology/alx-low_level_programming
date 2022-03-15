#include "main.h"

/**
 * _islower - check if a character is lowercasw
 * Take a character argument
 * Return 1 if successful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
