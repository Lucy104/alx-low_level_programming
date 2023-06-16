#include <stdio.h>

/**
  * main - Entry point
  * Description: program that prints alphabet in lowercase, and in uppercase
  * Return: 0 (Success)
  */
int main(void)
{
	int ch;
	int zh;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (zh = 'A'; zh <= 'Z'; zh++)
		putchar(zh);
	putchar('\n');
	return (0);
}
