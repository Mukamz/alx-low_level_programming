#include "main.h"

/**
 * _strcat - Concatenates the string
 * @dest: A pointer to concanetaed string
 * @src: Sources string
 * Return: A pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
