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
                        for (int j = i + 1; j <= 9; j++)
                        {
                                putchar('0' + i);
                                putchar('0' + j);
                                if (!(i == 8 && j == 9))
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                }
        putchar (10);
        return (0);
}
