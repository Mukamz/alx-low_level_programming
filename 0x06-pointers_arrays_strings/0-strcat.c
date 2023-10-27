include "main.h"

/**
 * _strcat - Concatenates the string
 * @dest: A pointer to concanetaed string
 * @src: Sources string
 * Return: A pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
		int dest_len = 0;

		while (dest[dest_len] != '\0')
			dest_len++;

		for (int i = 0; src[i] != '\0'; i++)
		{
			dest[dest_len + i] = src[i];
		}
		dest[dest_len + i] = '\0';

		return (dest);
}

