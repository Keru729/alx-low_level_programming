#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments to be concatenated
 * @av: input array of arguments
 *
 * Return: a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int count = 0;
	int i;
	int j = 0;
	int k = 0;
	char *ptr = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		while (av[i][k] != '\0')
		{
			count = count + 1;
			k++;
		}
		count++;
		k = 0;
	}

	count++;
	ptr = malloc(count * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{

		while (av[i][k] != '\0')
		{
			ptr[j++] = av[i][k];
			k++;
		}
		ptr[j++] = '\n';
		k = 0;
	}

	ptr[j] = '\0';

	return (ptr);
}
