#include <stdio.h>

/**
  * main - Entry point
  * Description: program that prints all the numbers of base 16 in lowercase
  * Return: 0 (Success)
  */
int main(void)
{
	int ch = 97;
	int i;

	i = 0;
	while (i < 16)
	{
		if (i < 10)
		{
			putchar('0' + i);
		}
		else
		{
			putchar(ch);
			ch++;
		}
		i++;
	}
	putchar('\n');

	return (0);
}
