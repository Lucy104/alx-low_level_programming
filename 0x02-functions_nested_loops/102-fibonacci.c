#include <stdio.h>

/**
 * main - main block
 * Description: Print the first 50 fibonacci numbers, starting with 1 and 2.
 * Numbers must be coma and space separated.
 * Return: 0
 */
int main(void)
{
	int count = 2;
	long int l = 1, n = 2;
	long int k;

	printf("%lu, ", l);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", n);
		}
		else
		{
			printf("%lu, ", n);
		}

		k = n;
		n += l;
		l = k;
		count++;
	}

	return (0);
}
