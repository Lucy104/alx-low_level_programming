#include <stdio.h>

/**
  * main - Entry point
  * Description:  program that prints all single digit numbers of base 10
  * Return: 0 (Success)
  */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 10; i++)
		putchar('0' + i);
	putchar('\n');
	return (0);
}
