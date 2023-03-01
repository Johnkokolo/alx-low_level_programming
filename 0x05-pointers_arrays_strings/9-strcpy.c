#include "main.h"

/**
 * char *_ strcpy - a fucntion that copies the string pointed to by src
 * @dest: copy
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{       
        int l = 0;

        while (*(src + 1) != '\0')
        {       
                l++;
        }               
        for ( ; x < 1; x++)
        {       
                dest[x] = src[x];
        }
        dest[l] = '\0';
        return (dest);
}
