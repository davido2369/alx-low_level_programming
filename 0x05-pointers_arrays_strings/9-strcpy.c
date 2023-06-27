#include "main.h"
/**
 * char *_strcpy - A function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int z = 0;
	int b = 0;

	while (*(src + z) != '\0')
	{
		z++;
	}
	for (;  b < z; b++)
	{
		dest[b] = src[b];
	}
	dest[z] = '\0';
	return (dest);
}
