#include <stdio.h>

/**
  * main - Entry point
  * Description:  program that prints all possible different combinations
  * Return: 0 (Success)
  */
int main(void)
{
	int z;

	for (z = 0; z < 9; z++)
	{
		int k;

		for (k = 0 + z; k < 9; k++)
		{
			putchar('0' + z);
			putchar('0' + k + 1);
			if (z < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
