#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 9; j++)			
		{
			for (k = j + 1; k <= 9; k++)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (i != 7 || j != 8 || k != 9)
					{
						putchar (44);
						putchar (32);
					}
			}
		}
	}
	putchar (10);
	return (0);
}
