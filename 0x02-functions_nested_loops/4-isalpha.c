#include "main.h"

/**
 * _isalpha - checks for alphabet
 * @c: character to be check
 *
 * Return: 1 if character is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}
