#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: Get a random letter and print the lower catse
 * return: 0 (success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
