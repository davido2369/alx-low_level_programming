#include "main.h"
/**
 * char *_strcpy - A function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int 1 = 0;
	int b = 0;

	while (*(src + 1) != '\0')
	{
		1++;
	}
	for (;  b < 1; b++)
	{
		dest[b] = src[b];
	}
	dest[1] = '\0';
	return (dest);
}
