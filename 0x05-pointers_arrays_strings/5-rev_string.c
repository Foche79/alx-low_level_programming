#include "main.h"

/**
 * rev_string - print a reverses string
 * @s: Input string
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		Putchar(s[i]);

	_putchar('\n');
}
