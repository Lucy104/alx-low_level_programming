#include "main.h"

/**
  * print_alphabet - Entry point
  * Description:  a function that prints the alphabet, in lowercase.
  * Return: Nothing
  */
void print_alphabet(void)
{
	int j;

	for (j = 97; j <= 122; j++)
		_putchar(j);

	_putchar('\n');
}
