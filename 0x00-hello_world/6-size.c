#include <stdio.h>
/**
 * main- Print the sizes of data types
 *
 * Return: Always 0 when successful
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char is: %li byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int is: %li byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int is: %li byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int is: %li byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float is: %li byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
