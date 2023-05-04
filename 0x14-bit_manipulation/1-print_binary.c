#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - print an unsigned int in binary
 * @n:the value to be printed
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int printbit = 1ul << 63;
	char d = '0';

	while (!(printbit & n) && printbit != 0)
		printbit = printbit >> 1;

	if (printbit == 0)
		write(1, &d, 1);

	while (printbit)
	{
		if (printbit & n)
			d = '1';
		else
			d = '0';
		write(1, &d, 1);
		printbit = printbit >> 1;
	}
}
