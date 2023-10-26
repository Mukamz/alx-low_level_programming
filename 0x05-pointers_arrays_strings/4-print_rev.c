#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: string to be reversed
 */
void print_rev(char *s)
{
	int l;
        char ch;
        char s1[] =;
	fgets(s1, sizeof(s1), stdin);
        l = strlen(s1);


        for (int i = 0; i < l / 2; i++)
        {
                ch = s1[i];
                s1[i] = s1[l - 1 - i];
                s1[l -1 -i] = ch;
        }
        printf("%s\n", s1);
}
