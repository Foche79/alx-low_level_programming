#include "main.h"

/**
 * _islower - to check if character is in lowercase
 * @c: the character
 * Return: 1 if letters is in lowercase, 0 if not
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
