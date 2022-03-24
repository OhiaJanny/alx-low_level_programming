#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @scr: string to add
 *
 * Return: a poiinter to the resulting string
 */
char *_strcat(char *dest, char *scr)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (scr[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

