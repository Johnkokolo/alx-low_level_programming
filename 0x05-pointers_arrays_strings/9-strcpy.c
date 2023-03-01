#include "main.h"

/**
 * char *_ strcpy - a fucntion that copies the string pointed to by src
 * @dest: copy
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + j) = *(src + j);
		j++;
	}

	*(dest + j) = '\0';
	return (dest);
}
