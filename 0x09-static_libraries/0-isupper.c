#include "main.h"

/**
 * _isupper - Checks if the parameter is an uppercase character.
 * @c: input character.
 * Return: 1 if it is an uppercase character, 0 in other case.
 */

int _isupper(int c)
{
	if (c >= A && c <= Z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
