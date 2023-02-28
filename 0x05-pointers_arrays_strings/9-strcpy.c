#include "main.h"

/**
 * _strcpy - copy the string posted by source
 * @dest: destination
 * @src: source
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

	while (*(src + len) != '\0')
	{
		*(dest + len) = *(src + len);
		l++;
	}

	*(dest + len) = '\n';
	return (dest);
}
