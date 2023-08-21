#include "main.h"

/**
 * *_strcpy -  copies the string pointed to by src
 * @dest: target char type string
 * @src: source char type string
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest
 */

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (src[inc] != '\0')
	{
		dest[inc] = src[inc];
		inc++;
	}
	dest[inc] = '\0';

	return (dest);
}
