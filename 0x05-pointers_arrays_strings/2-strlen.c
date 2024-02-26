#include "main.h"

/**
 * _strlen - prints length of string
 * @str: string.
 *
 * Return: string length
 */
int _strlen(char *str)
{
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		len = len + 1;
	}
	return (len);
}
