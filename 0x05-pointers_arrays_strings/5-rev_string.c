#include "main.h"

/**
 * rev_string - string reversal
 * @s: input string
 * Return: string reverse
 */
void rev_string(char *s)
{
	char rev = s[0];
	int z = 0;
	int a;

	while (s[z] != '\0')
	{
		z++;
	}
	for (a = 0; a  < z; a++)
	{
		z--;
		rev = s[a];
		s[a] = s[z];
		s[z] = rev;
	}
}
