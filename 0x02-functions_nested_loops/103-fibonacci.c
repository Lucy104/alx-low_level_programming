#include <stdio.h>

/**
 * main - main block
 * Description: Print the sum of even Fibonacci numbers up to a fib value
 * not exceeding 4,000,000.
 * Return: 0
 */
int main(void)
{
	int l = 1, n = 2, total = 0;
	int k;

	while (n < 4000000)
	{
		if (n % 2 == 0)
			total += n;

		k = n;
		n += l;
		l = k;
	}
	printf("%d\n", total);
	return (0);
}
