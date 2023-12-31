#include <stdio.h>
#include <string.h>
#include "main.h"

/**
  * _puts_recursion -  function that prints a string
  * @s: input
  * Return: Always 0
  */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		printf("\n");
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
