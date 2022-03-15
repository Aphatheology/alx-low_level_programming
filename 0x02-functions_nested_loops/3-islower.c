#include "main.h"

/**
 * _islower - check if a character is lowercasw
 * @c: Take a character c as argument to be checked
 * Return:  1 if successful and 0 if otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
