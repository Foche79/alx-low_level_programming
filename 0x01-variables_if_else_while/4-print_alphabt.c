#include <stdio.h>
#include <stdlib.h>
/**
 * main - print alphabets of lower case
 * follow by a new line, except q and e
 * Return: Always 0
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'z')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
