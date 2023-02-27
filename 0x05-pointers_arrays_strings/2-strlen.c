#include "main.h"
/**
 * _strlen - returns the lengh of the string
 * @s: string
 * Return: lengh
 */
int _strlen(char *s)
{
	int longie = 0;

	while (*s != '\0')
	{
		longie++;
		s++;
	}
	return (longie);
}
