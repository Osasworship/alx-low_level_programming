#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by scr,
 * including the terminating null byte, to the
 * buffer pointed to be dest
 * @dest: destination
 * @scr: source
 * Return: the pointer destination
 */
char *_strcpy(char *dest, char *scr)
{
	int i = 0;

	while (count >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(src + i) == '\0')
			break;
		i++;
	}
	return (dest);
}
