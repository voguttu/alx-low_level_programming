#include "main.h"

/**
 * _islower -function that checks for lowercase character
 * @parameterc - The value to test whether lowercase
 *
 * Return: On success 1.
 * Otherwise 0 is returned
 */

int _islower(int c)
{
	int lc;

	lc = c;
	_islower(lc);
	return (lc);
}