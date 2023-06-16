#include <stdio.h>

/**
  * main - Entry point
  * Description: use 'putchar' print possible combinations of 3 digits
  * Return: Always 0 (Success)
  */
int main(void)
{
	int z;

	for (z = 0; z < 9; z++)
	{
		int k;

		for (k = 0 + z; k < 9; k++)
		{
			int s;

			for (s = 1 + k; s < 9; s++)
			{
				putchar('0' + z);
				putchar('0' + k + 1);
				putchar('0' + s + 1);
				if (z < 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
