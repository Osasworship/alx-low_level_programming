#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s:length to be measured
 * Return: length
 */
int _strlen(char *s)
{
	int a = 0;
	/* increament up to the last character is NULL,\0*/
	while (*(s + a) != 0)
	{
		a++;
	}
	return (a);
}
