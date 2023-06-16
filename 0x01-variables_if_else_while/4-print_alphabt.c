#include <stdio.h>

/**
  * main - Entry point
  * Description: program that prints the alphabet in lowercase, except q and e
  * Return: 0 (Success)
  */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');

	return (0);
}
