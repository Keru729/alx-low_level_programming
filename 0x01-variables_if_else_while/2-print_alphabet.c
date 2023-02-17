#include <stdio.h>
#include <stdlib.h>
/**
 * Main - main block
 * Description: Get a random letter and print the lower catse
 * return: 0
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
