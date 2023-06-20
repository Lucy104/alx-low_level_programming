#include "main.h"

/**
* print_alphabet_x10 - Entry point
* Description:  a function that prints the alphabet, in lowercase
* Return: Nothing
*/
void print_alphabet_x10(void)
{
	int j, k;

	for (k = 0; k < 10; k++)
	{
		for (j = 97; j <= 122; j++)
			_putchar(j);

		_putchar('\n');
	}
}
