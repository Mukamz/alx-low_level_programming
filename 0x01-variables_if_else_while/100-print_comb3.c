#include <stdio.h>

/**
 * main - Entry point
 * return: Always 0 (success)
 */
int main(void)
{
        int i, j;

        for (int i = 0; i <= 8; i++)
        {
                        for (j = i + 1; j <= 9; j++)
                        {
                                putchar(48 + i);
                                putchar(48 + j);
                                if (!(i == 8 && j == 9))
                                {
                                        putchar(44);
                                        putchar(32);
                                }
                        }
                }
        putchar (10);
        return (0);
}
