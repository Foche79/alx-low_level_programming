#include <stdio.h>
#include <stdlib.h>
/**
 * main - returns lower alphabets
 * Return: Always 0
 */
int main(void)
{
	char lv;

	for (lv = 'a'; lv <= 'z'; lv++);
	{
		putchar(lv);
	}
	putchar('\n');
	return (0);
}
