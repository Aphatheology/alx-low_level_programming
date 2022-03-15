#include "main.h"

/**
 * _abs - compute absolute value of an interger
 * @n: integer to be passed
 * Return: Always 0 (Successful)
 */
int _abs(int n)
{
	if (n > 0)
	{
		n = n * 1;
	}
	else if (n == 0)
	{
		n = 0;
	}
	else if (n < 0)
	{
		n = n * -1;
	}
	return (n);
}
