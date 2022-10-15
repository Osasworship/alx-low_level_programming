#include <stdio.h>
/**
 * main - print the sizes of data types
 *
 * Return: return zero if no errors otherwise, return a non-zero value
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("The size of a char is: %lu.\n", (unsigned long)sizeof(a));
	printf("The size of an int is: %lu.\n", (unsigned long)sizeof(b));
	printf("The size of a long int is: %lu.\n", (unsigned long)sizeof(c));
	printf("The size of a long long int is: %lu.\n", (unsigned long)sizeof(d));
	printf("The size of a float is: %lu.\n", (unsigned long)sizeof(e));

	return (0);
}
