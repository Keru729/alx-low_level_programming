#include <stdio.h>
/**
 * main- prints the size of various types on the computer
 * Return: o
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf ("size of a char: %li  byte(s)\n", (unsigned long)sizeof(a));
	printf ("size of an int: %li  byte(s)\n", (unsigned long)sizeof(b));
	printf ("size of a long int: %li byte(s)\n", (unsigned long)sizeof(c));
	printf ("size of a long long int: %li byte(s)\n", (unsigned long)sizeof(d));
	printf ("size of a float: %li byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
