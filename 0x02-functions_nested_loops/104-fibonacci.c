#include <stdio.h>
#define LARGEST 10000000000
/**
 * main - main block
 * Description: Find and print the first 98 fib numbers starting with 1 and 2
 * Numbers should be coma and space separated.
 * Return: 0
 */
int main(void)
{
	unsigned long int zk1 = 0, ln1 = 1, zk2 = 0, ln2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", ln1, ln2);
	for (count = 2; count < 98; count++)
	{
		if (ln1 + ln2 > LARGEST || zk2 > 0 || zk1 > 0)
		{
			hold1 = (ln1 + ln2) / LARGEST;
			hold2 = (ln1 + ln2) % LARGEST;
			hold3 = zk1 + zk2 + hold1;
			zk1 = zk2, zk2 = hold3;
			ln1 = ln2, ln2 = hold2;
			printf("%lu%010lu", zk2, ln2);
		}
		else
		{
			hold2 = ln1 + ln2;
			ln1 = ln2, ln2 = hold2;
			printf("%lu", ln2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
