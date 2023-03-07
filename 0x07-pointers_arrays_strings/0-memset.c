#include "main.h"

/**
 * _memset - fill a memory with a specific value
 * @s: starting address memory to be filled
 * @b: the desired value
 * @n: the number of byte to change
 * Return: change array with the new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
